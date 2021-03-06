clear all; clc; close all;

N = 10000;

load('x_normalizado');
load('tNormalizado');
load('pesoEntrada.mat');%W1
load('pesoSaida.mat');%W2

%Sinal de entrada
%x = linspace(0,2*pi,N);%VALORES ALEATORIOS

%Resposta desejada
%t = sin(x) + sin(2*x);%VALERIA A PENA USAR A NOTA??O DE EULER????

%Atrasos da Linha de mem?ria
p = 10;%Q ISSO?

%Normaliza??o das entradas e sa?das no intervalos de 0 a 1
%[x,PSx] = mapminmax(x,-1,1);%NORMALIZA ENTRADA?
%[t,PSt] = mapminmax(t,-1,1);%NORMALIZA IDEAL

%Forma??o dos pares de treinamento
for j = 1:N-p
    X(:,j) = x(j:p+j-1)';%S?O OS PESOS? CADA COLUNA SIGNIFICA O Q?
end
    T = t(p-floor(p/2):N-floor(p/2)-1);%Q ISSO?

%% Aprendizado de Rede Neural Artificial por Gradiente Descendente
%Quantidade de Neur?nios
h = 8;
        
%Inicializa??o aleat?ria do vetor de pesos
%W1  = 2*rand(h,p*size(x,1)+1)-1;	%Pesos da camada de entrada
%W2  = 2*rand(size(t,1),h+1)-1;      %Pesos da camada de sa?da
dW1 = zeros(size(W1));
dW2 = zeros(size(W2));

%Pesos utilizados para comparar o c?digo e toolbox do matlab
W1i = W1;
W2i = W2;

%Taxa de aprendizagem, m?ximo de ep?cas, termo momentum e regulariza??o
eta  = 0.3;
epoc = 2000;
alfa = 0.1;
lmbd = 0.0;

%Repeti??o do algoritmo segundo a quantidade de ?pocas
for i = 1:1%epoc

    %% FeedFoward
    %Camada Escondida
    Xb = [ones(size(X,2),1)';  X];
    u1 = W1*Xb;
    y1 = tanh(u1);
    W1Tiago = W1;
    %Camada de Sa?da
    Yb = [ones(size(y1,2),1)'; y1];
    u2 = W2*Yb;
    Y2 = u2;
    W2Tiago = W2;
    %% FeedBackward
    %Regra Delta na Camada de Sa?da
    e    = T - Y2;
    dW2a = dW2;
    dW2  = e*Yb'/N;
    
    W2(:,1)     = W2(:,1) + alfa*dW2a(:,1) + eta*dW2(:,1);
    W2(:,2:h+1) = (1+lmbd*eta/N)*W2(:,2:h+1) + alfa*dW2a(:,2:h+1) + eta*dW2(:,2:h+1);
      
    %Regra Delta na Camada Escondida
    delta = (1-y1.^2)'.*(e'*W2(2:h+1));
    dW1a  = dW1;
    dW1   = delta'*Xb'/N;
    
    W1(:,1) = W1(:,1) + alfa*dW1a(:,1) + eta*dW1(:,1);
    W1(:,2:p+1) = (1+lmbd*eta/N)*W1(:,2:p+1) + alfa*dW1a(:,2:p+1) + eta*dW1(:,2:p+1);
        
    e_rms(i)   = rms(e);
    e_mse(i)   = mse(e);
    perf(i)    = e_mse(i);
    e_epc(i,:) = e;
    Yepoc{i}   = Y2;
    
  
end