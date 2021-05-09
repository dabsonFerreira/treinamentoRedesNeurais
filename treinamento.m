clc; clear all;
load('x_normalizado');
load('tNormalizado');

load('pesoEntrada.mat');%W1
load('pesoSaida.mat');%W2



N = 10000; %sinal total?
h = 8; % número de neuronios
p = 10;
epoca = 10;
lmbd = 0.0; %não sei o q é

%criterio de parada
muini = 0.001;
mi = muini;
beta = 10;

%% sinal de entrada
for L = 1:1%N-p
    X = x(L:p+L-1)';    
    T = t(L+floor(p-p/2));

    %% Hide Layer
    for i = 1:10
        Xb(i) = 1;
    end

    for i = 2:11
        Xb(i) = X(i-1);
    end
    
    ponderacao1 = W1*Xb';
    
    saida1 = tanh(ponderacao1);%aproximar com euler?
        
    %% Out Layer
    for i = 1:size(saida1)
        Yb(i) = 1;
    end
    
    for i = 2:9%substituir por 11
        Yb(i) = saida1(i-1);
    end
    ponderacao2 = W2*Yb';
    saida2 = ponderacao2;
    
    %% erro
    E = T - Y2;
    Ean(ep) = mse(E); %% preciso entender pra saber implementar
    
    %% Treinamento
    
    for n = 1:h
    
        wdab  = W1(n,:);
        %o a = wtemp
        a = saida1(:,n);
        
        %J1temp = -1*(1-saida1(:,n).^2).*W2(n+1).*Xb;
        
        for as = 1:8
            a(as) = a(as)*a(as);
        end
        a = 1-a;
        for as = 1:8
            a(as) = a(as)*W2(n+1);
        end
        for as = 1:8
            for aas = 1:11
                mJ1temp(as,aas) = a(as)*Xb(1,aas);
            end
        end
        mJ1temp = -mJ1temp;
        if n == 1
            W  = wdab;
            J1 = mJ1temp';
        else
            cont = 1;
            for indice = length(W+1):length(W+wdab)
                               
                    W(indice) = wdab(cont);
                cont = cont+1;
                %W  = [W wdab];
            end
            cont = 1;
            for indice = length(J1+1) : length(J1 + mJ1temp')                
                J1(indice) = mJ1tmp(cont)';
                cont = cont+1;
                %J1 = [J1 mJ1temp'];
            end
        end
    end
        
        %% juntando pesos
        cont = 1;
        for indice = length(W+1):length(W+W2)
            W(indice) = W2(cont);
            cont = cont + 1;
        end
        cont = 1;
        J = J1;
        for indice = length(J1+1): length(J1+Yb')
            J(indice) = -Yb(cont)'
            cont = cont+1;
        end
        %J = [J1 -Yb'];
        
        w = W;
        
        %% Parâmetro de silenciamento (damper) igual
        
            H = J'*J/N;
            g = J'*E'/N;
            G(:,ep) = g;
            for i = 1:97
                for ii = 1:97
                    if i == ii
                         iden(i,ii) = 1;
                    end
                end
            end
               
            M = mi*iden;
            W = w - g'*inv(H + M);
            
            
           %% posicionando os pesos
            for k = 1:h
                W1(k,:) = W((k-1)*11+1:k*11);
            end
            
            W2 = W(h*11+1:h*11+h+1);
            
            %%PARAMOS LINHA 112
end 









