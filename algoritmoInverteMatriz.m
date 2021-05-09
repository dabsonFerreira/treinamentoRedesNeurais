matriz = [1 3 1 0; 2 1 0 1];
det = matriz(1,1)*matriz(2,2)-matriz(1,2)*matriz(2,1);
if (det~=0)
    if(matriz(1,1) ~= 1 && matriz(1,1) ~= 0)
        a = matriz(1,1);
        matriz(1,1) = a/a; 
        matriz(1,2) = matriz(1,2)/a;
        matriz(1,3) = matriz(1,3)/a;
        matriz(1,4) = matriz(1,4)/a;


        b = -a*matriz(2,1);
        matriz(2,1) = b+matriz(2,1);
        matriz(2,2) = b*matriz(1,2)+matriz(2,2);
        matriz(2,3) = b*matriz(1,3)+matriz(2,3);
        matriz(2,4) = b*matriz(1,4)+matriz(2,4);

    else
        if(matriz(1,1) == 1)
            a = matriz(1,1);

            b = -a*matriz(2,1);
            matriz(2,1) = b*matriz(1,1)+matriz(2,1);
            matriz(2,2) = b*matriz(1,2)+matriz(2,2);
            matriz(2,3) = b*matriz(1,3)+matriz(2,3);
            matriz(2,4) = b*matriz(1,4)+matriz(2,4);
        end
        
    end

    if(matriz(2,2) ~= 1 && matriz(2,2) ~= 0)
        a = matriz(2,2);
        matriz(2,1) = matriz(2,1)/a;
        matriz(2,2) = a/a;
        matriz(2,3) = matriz(2,3)/a;
        matriz(2,4) = matriz(2,4)/a;

        b = -a*matriz(1,2);
        matriz(1,1) = b*matriz(2,1)+matriz(1,1);
        matriz(1,2) = b*matriz(2,2)+matriz(1,2);
        matriz(1,3) = b*matriz(2,3)+matriz(1,3);
        matriz(1,4) = b*matriz(2,4)+matriz(1,4);

    else
        if(matriz(2,2) == 1)
        a = matriz(2,2);    
        b = -a*matriz(1,2);
        matriz(1,1) = b*matriz(2,1)+matriz(1,1);
        matriz(1,2) = b*matriz(2,2)+matriz(1,2);
        matriz(1,3) = b*matriz(2,3)+matriz(1,3);
        matriz(1,4) = b*matriz(2,4)+matriz(1,4);
        end    
    end
else
    disp('Não invertível');
end

