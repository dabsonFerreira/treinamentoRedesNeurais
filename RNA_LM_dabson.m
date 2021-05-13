clear all; close all; clc;
load('x_normalizado');
load('tNormalizado');

load('pesoEntrada.mat');%W1
load('pesoSaida.mat');%W2

%% Configuração dos dados de entrada

%Comprimento do vetor de treinamento
N = 1000;


%Atrasos da Linha de memória
p = 10;

%% Aprendizado de Rede Neural Artificial pelo Algoritmo LM
%Quantidade de Neurônios
h = 8;

%Inicialização aleatória do vetor de pesos
X = x(1:p)';
T = t(1+floor(p-p/2));
        

%Taxa de aprendizagem, máximo de epócas, termo momentum e regularização
epoc = 1;%TAVA 20
lmbd = 0.0;
%Critérios de parada e aprendizagem
muini   = 0.001;
mi      = muini;
beta    = 10;

%Repetição do algoritmo segundo a quantidade de épocas
for i = 1:epoc
    for j = 1:N-p %EU COMENTEI PARA TESTE
        X = x(j:p+j-1)';
        T = t(j+floor(p-p/2));
            %% FeedFoward
            %Etapa necessária para comparar o resultados dos pesos na época
            %com os valores desejados e computar o erro
            
            %Camada Escondida
            Xb      = [ones(size(X,2),1)';  X];%TAMANHO 11
            I1      = W1*Xb;%TAMANHO 8
            Y1      = tanh(I1); % TAMANHO 8

            %Camada de Saída
            Yb      = [ones(size(Y1,2),1)'; Y1];% TAMANHO 9
            I2      = W2*Yb;%TAMANHO 1
            Y2      = I2;%TAMANHO 1

            E = T - Y2;%TAMANHO 1
            Ean(i) = mse(E); %TAMANHO 1 SEM EPOCA
            
            %% FeedBackward
            %Levemberg-Marquadt é realizado em todas as Camadas ao mesmo tempo :D
            %Concatenar pesos de todos os neurônio e jacobianas
            %considerando todas as camadas
        
            for n = 1:h 

                Wtemp  = W1(n,:);%TAMANHO 11
                %Wtia(n,:) = Wtemp;
                J1temp = -1*(1-Y1(n,:).^2).*W2(n+1).*Xb; %TAMANHO 11

                if n == 1
                    W  = Wtemp; %TAMANHO 11 
                    J1 = J1temp'; %TAMANHO 11
                else
                    W  = [W Wtemp];%TAMANHO n=2 22 n=8 88
                    J1 = [J1 J1temp'];%TAMANHO n=2 22 n = 8 88
                end

            end

            W = [W W2]; %TAMANHO 97
            
            J = [J1 -Yb']; %TAMANHO 97
            
            w = W; %TAMANHO 97
            
           
            %Parâmetro de silenciamento (damper) igual
            %Atualização dos Pesos por LM
            H = J'*J/N; %TAMANHO 97x97
            g = J'*E'/N; %TAMANHO 97
            G(:,i) = g; %TAMANHO 97
            M = mi*eye(size(J,2)); %TAMANHO 97x97
            W = w - g'*inv(H + M); %TAMANHO 97%O ERRO DA SEGUNDA VEZ EH AKI!!!!!!
            
            %Reposicionando os pesos
            
            for k = 1:h
                W1(k,:) = W((k-1)*size(Xb,1)+1:k*size(Xb,1)); %TAMANHO 8x11
            end

            W2 = W(h*size(Xb,1)+1:h*size(Xb,1)+h+1);%TAMANHO 9

            %Recomputando o erro
            Xb      = [ones(size(X,2),1)';  X]; %TAMANHO 11
            I1      = W1*Xb; %TAMANHO 8
            Y1      = tanh(I1); %TAMANHO 8
            Yb      = [ones(size(Y1,2),1)'; Y1];%TAMANHO 9
            I2      = W2*Yb; %TAMANHO 1
            Y2      = I2; %TAMANHO 1
            Eat(i)  = mse(T - Y2); %TAMANHO 1 em 1 epoca

            %Caso o erro dos pesos atualizados seja melhor que o obtido
            %anteriormente o parâmetro de silênciamento (damper) é 
            %diminuído e o resultado final da rede é mantido para a próxima
            %época
            
            if Eat(i) <= Ean(i)
                mi = max(mi/beta,1e-7); %o damper não pode ser menor que 1e-7
                mimat(j) = mi;
                Yi(j) = Y2;
                perf(i) = Eat(i);
            else
                while Eat(i) > Ean(i)
                    %Parâmetro de silenciamento (damper) aumentando
                    mi = min(mi*beta,1e7); %o damper não pode ser maior que 1e7
                    M = mi*eye(size(J,2));

                    %Recomputando os pesos com o novo damper
                    W = w - g'*inv(H + M);
                    
                    %Reposicionando os pesos com o novo damper
                    for k = 1:h
                        W1(k,:) = W((k-1)*size(Xb,1)+1:k*size(Xb,1));
                    end

                    W2 = W(h*size(Xb,1)+1:h*size(Xb,1)+h+1);

                    % Recomputando o erro com o novo damper
                    Xb     = [ones(size(X,2),1)';  X];
                    I1     = W1*Xb;
                    Y1     = tanh(I1);
                    Yb     = [ones(size(Y1,2),1)'; Y1];
                    I2     = W2*Yb;
                    Y2     = I2;
                    
                    % Atualizando o erro a ser comparado no laço com o novo
                    % damper
                    Eat(i) = mse(T-Y2);
                end
                %o damper é diminuído novamente quando o laço é terminado
                mi = max(mi/beta,1e-7);
                
                %Resultado final obtido
                Yi(j) = Y2;
                
                %Perfomance da Rede
                perf(i) = Eat(i);
            end
            mu(i) = mi;
            Erro(:,i) = T-Yi(j);
            
            ww(j,:) = W;
            EE(j) = E;
            Eatt(j) = Eat;
            gg(:,j) = g;
            JJ(j,:) = J;
            mii(j) = mi;

    end
end
wwTiago = ww;
EETiago = EE;
EattTiago = Eatt;
ggTiago = gg;
JJTiago = JJ;
miiTiago = mii;

save wwTiago wwTiago;
save EETiago EETiago;
save EattTiago EattTiago;
save ggTiago ggTiago;
save JJTiago JJTiago;
save miiTiago miiTiago;





