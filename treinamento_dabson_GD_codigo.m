clc; clear all;
load('x_normalizado');
load('tNormalizado');
load('pesoEntrada.mat');%W1
load('pesoSaida.mat');%W2
N = 10000; %sinal total?
h = 8; % n?mero de neuronios
p = 10;
epoca = 2000;
lmbd = 0.0; %n?o sei o q ?

%criterio de parada
eta  = 0.3;
epoc = 2000;
alfa = 0.1;
lmbd = 0.0;
i =1;
ii=1;
W1idab = W1;
dW1 = zeros(size(W1));
dW2 = zeros(size(W2));
while i <=8 
    while ii<=11
        dW1a(i,ii) = 0; 
        dW2a(i,ii) = 0;
        ii = ii+1;
    end
    i = i +1;
end

%% sinal de entrada
for ep = 1:1%epoca
    for L = 1:N-p
        X = x(L:p+L-1)';    
        T(L) = t(L+4);

        %% Hide Layer
        
        Xb(1) = 1;        

        for i = 2:11
            Xb(i) = X(i-1);
        end%TAMANHO 11
        Xbb(:,L)=Xb;
        ponderacao1 = W1*Xb'; %TAMANHO 8
        %ponderacao1t(:,L) = ponderacao1;
        saida1 = tanh(ponderacao1);%TAMANHO 8
        saida11(:,L) = saida1;
        %y1dab(:,L) = saida1;
        %% Out Layer
        li = 1;        
        while li == 1
            Yb(li) = 1;
            li=li+1;
        end
        
        while li <=h+1            
            %substituir por 11
            Yb(li) = saida1(li-1);%9 
            li = li+1;
        end
        %Ybdab(:,L) = Yb(1,:);
        li = 1;
        ponderacao2 = 0;
        while li<=h+1
            ponderacao2 = ponderacao2 + W2(li)*Yb(li);
            li = li+1;
        end%TAMANHO 1
        %W2dab(L,:) = W2;
        %ponderacao2t(:,L) = ponderacao2;
        %u2dab(:,L) = ponderacao2;
        saida2 = ponderacao2; %TAMANHO 1
        
        e(L)    = T(L) - saida2;%tamanho: 1x9990             
        Ybb(:,L) = Yb;
    end 
    dW2a = dW2;%tamanho 9
    dW2  = e*Ybb'/N;%tamanho 9 %mudei o tamanho de yb e alterou o tamanho de dw2 
    W2(1,1) = W2(1,1) + alfa*dW2a(1,1) + eta*dW2(1,1);        
    co = 2;
    while co <=9
        W2(co) = (1+lmbd*eta/N)*W2(co) + alfa*dW2a(co) + eta*dW2(co);
        co = co+1;
    end
    li = 1; 
    %Regra Delta na Camada Escondida       
    while li<=8 
        co = 1;
        while co<=N-p
            inter0(li,co) = saida11(li,co)*saida11(li,co); %8
            co = co+1;
        end
        li = li+1;
    end

    inter0 = 1-inter0;%8
    co = 1;
    while co<=8
        W22(co) = W2(co+1);
        co = co+1;
    end
    inter1 = e'*W22;%8%%%%%%%%%%%%%%%%%%%%%%%%%%%

    inter0 = inter0';
   
    %%delta(li) = inter0'*inter1;%9990x8 
    while li <=N-p
        co = 1;
        while co<=8
            delta(li,co) = inter0(li,co)*inter1(li,co);
            co = co+1;
        end
        li = li+1;
    end
    li = 1;

    %delta = (1-y1.^2)'.*(e'*W2(2:h+1));%8x9990 e 9990x8 ---> 9990x8.9990x8
    dW1a  = dW1;
    dW1   = delta'*Xbb'/N;
    while li <=h
        W1(li,1) = W1(li,1) + alfa*dW1a(li,1) + eta*dW1(li,1);
        li = li+1;
    end
    li = 1;
    while li <= 8
        co = 2;
        while co <= 11
            W1(li,co) = (1+lmbd*eta/N)*W1(li,co) + alfa*dW1a(li,co) + eta*dW1(li,co);
            co = co+1;                
        end
        li = li+1;
    end
    Ybda(:,L)=Yb;
    
    u1dab(:,L)= ponderacao1;
    u2dab(L) = ponderacao2;
end