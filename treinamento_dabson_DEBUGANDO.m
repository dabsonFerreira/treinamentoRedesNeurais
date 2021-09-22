clc; clear all;
load('x_normalizado');
load('tNormalizado');

load('pesoEntrada.mat');%W1
load('pesoSaida.mat');%W2



N = 1000; %sinal total?
h = 8; % número de neuronios
p = 10;
epoca = 1;
lmbd = 0.0; %não sei o q é

%criterio de parada
muini = 0.001;
mi = muini;
beta = 10;

%% sinal de entrada
for ep = 1:epoca
    for L = 1:3%1000-10%%N-p
        X = x(L:p+L-1)';    
        T = t(L+floor(p-p/2));

        %% Hide Layer
        for i = 1:10
            Xb(i) = 1;
            
        end
%         if L==3
%             Xb(i)
%         end
        for i = 2:11
            Xb(i) = X(i-1);
%             if L==3
%                 Xb(i)
%             end
        end%TAMANHO 11

        ponderacao1 = W1*Xb'; %TAMANHO 8
%         if L==3
%             W1
%         end
        saida1 = tanh(ponderacao1);%TAMANHO 8
%         if L==1
%             saida1
%         end
        %% Out Layer
        for i = 1:size(saida1)
            Yb(i) = 1;
        end

        for i = 2:9%substituir por 11
            Yb(i) = saida1(i-1);
        end%TAMANHO 9
        ponderacao2 = W2*Yb'; %TAMANHO 1
        saida2 = ponderacao2; %TAMANHO 1

        %% erro
        E = T - saida2; %TAMANHO 1
        Ean(ep) = mse(E); %% preciso entender pra saber implementar %TAMANHO 1

        %% Treinamento

        for n = 1:h

            wdab  = W1(n,:);
            %Wtemp(n,:) = wdab;%debugandooooooooooooo
            a = saida1(n);
            a = a*a;
            
            a = 1-a;
            
            a = a*W2(n+1);
            
            for aas = 1:11
                mJ1temp(aas) = a*Xb(aas);
            end
            
            mJ1temp = -mJ1temp;%TAMANHO 11
            
            if n == 1
                W  = wdab; %TAMANHO 11
                J1 = mJ1temp'; %TAMANHO 11
            else
                cont = 1;
                for indice = (11*n-11+1):11*n
                    W(indice) = wdab(cont);
                    cont = cont+1;
                    %W  = [W wdab];
                end
                
                cont = 1;
                for indice = (11*n-11+1):11*n               
                    J1(indice) = mJ1temp(cont);
                    cont= cont+1;
                    %J1 = [J1 mJ1temp'];
                end
            end
        end

            %% juntando pesos
            cont = 1;
            for indice = 89:97
                W(indice) = W2(cont);
                cont = cont + 1;
            end
            cont = 1;
            J = J1;
            for indice = 89: 97
                J(indice) = -Yb(cont)';
                cont = cont+1;
            end
            %J = [J1 -Yb'];

           w = W;
           J = J';
            %% Parâmetro de silenciamento (damper) igual
                
                H = J'*J/N;%TAMANHO 97x97
                g = J'*E'/N;%TAMANHO 97
                
              
                
                for i = 1:97
                    for ii = 1:97
                        if i == ii
                             iden(i,ii) = 1; 
                        end
                    end
                end

                M = mi*iden;%TAMANHO 97X97
                W = w - g'*inv(H + M); 
                
               %% posicionando os pesos
                for k = 1:h
                    W1(k,:) = W((k-1)*11+1:k*11);
                end

                W2 = W(h*11+1:h*11+h+1);

                %% Recomputando o erro

                %Xb      = [ones(size(X,2),1)';  X];
                for i = 1:10
                   Xb(i) = 1;
                end

                for i = 2:11
                    Xb(i) = X(i-1);
                end%TAMANHO 11

                 
                 ponderacao1   = W1*Xb';
                 saida1      = tanh(ponderacao1);
                 %Yb      = [ones(size(Y1,2),1)'; Y1];

                 for i = 1:size(saida1)
                    Yb(i) = 1;
                 end

                 for i = 2:9%substituir por 11
                     Yb(i) = saida1(i-1);
                 end%TAMANHO 9        

                 ponderacao2 = W2*Yb'; %TAMANHO 1
                 saida2      = ponderacao2;%TAMANHO 1
                 Eat(ep)      = mse(T - saida2); %TAMANHO 1
                 
            %Caso o erro dos pesos atualizados seja melhor que o obtido
            %anteriormente o parâmetro de silênciamento (damper) é 
            %diminuído e o resultado final da rede é mantido para a próxima
            %época
        %%!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!%%
            if Eat(ep) <= Ean(ep)
                if mi/beta < 1e-7
                    mi = 1e-7; %o damper não pode ser menor que 1e-7 SOH FAZER IF ELSE AKI
                    %mi = max(mi/beta,1e-7)
                else
                    mi = mi/beta;
                end
                mimat(L) = mi;
                Yi(L) = saida2;
                perf(ep) = Eat(ep);
            else
                while Eat(ep) > Ean(ep)
                    %Parâmetro de silenciamento (damper) aumentando
                    if mi*beta > 1e7
                        mi = 1e7; 
                    else
                        mi = mi*beta;
                    end
                    %M = mi*eye(size(J,2));EU COMENTEI PARA RECRIAR COMO FOR
                    for i = 1:97
                        for ii = 1:97
                            if i == ii
                                 iden(i,ii) = 1;
                            end
                        end
                    end

                    M = mi*iden;    
                    %Recomputando os pesos com o novo damper
                    W = w - g*inv(H + M);
                    
                    %Reposicionando os pesos com o novo damper
                    for k = 1:h
                        for kk = 1:11
                            W1(k,kk) = W((k-1)*11+1:k*11);
                            k*11
                        end
                    end

%                   W2 = W(h*size(Xb,1)+1:h*size(Xb,1)+h+1);
                    W2 = W(h*11+1:h*11+h+1);
                    % Recomputando o erro com o novo damper
                    %Xb     = [ones(size(X,2),1)';  X]; COMENTEI
                    for i = 1:10
                        Xb(i) = 1;
                    end

                    for i = 2:11
                        Xb(i) = X(i-1);
                    end%TAMANHO 11
                    
                    ponderacao1 = W1*Xb';
                    Y1     = tanh(ponderacao1);
                    %Yb     = [ones(size(Y1,2),1)'; Y1];
                    for i = 1:size(saida1)
                        Yb(i) = 1;
                    end

                    for i = 2:9%substituir por 11
                        Yb(i) = saida1(i-1);
                    end%TAMANHO 9
                    
                    ponderacao2     = W2*Yb';
                    saida2     = ponderacao2;
                    
                    % Atualizando o erro a ser comparado no laço com o novo
                    % damper
                    Eat(ep) = mse(T-saida2);
                end
                %o damper é diminuído novamente quando o laço é terminado
                if mi/beta < 1e-7
                    mi = 1e-7; %o damper não pode ser menor que 1e-7 SOH FAZER IF ELSE AKI
                    %mi = max(mi/beta,1e-7)
                end
                
                %Resultado final obtido
                Yi(L) = saida2;
                
                %Perfomance da Rede
                perf(ep) = Eat(ep);%não implementar!!!!!!!!!
            end
            mu(ep) = mi;
            Erro(:,ep) = T-Yi(L);
            
%             ww(L,:) = W;
%             EE(L) = E;
%             Eatt(L) = Eat;
%             gg(:,L) = g;
%             JJ(L,:) = J;
%             mii(L) = mi;
    end 
end

% load('YiTaylor.mat');
% figure;plot(Yi,'blue');grid;hold on;
% plot(YiTaylor, 'red');grid;hold off;
% 
% errosaida2rms = rms((YiTaylor-Yi)./Yi);
% 
% um = YiTaylor*YiTaylor'/(Yi*Yi');
% 
% errosaida2 = ((Yi - YiTaylor)/Yi)*100;
% %% teste python





