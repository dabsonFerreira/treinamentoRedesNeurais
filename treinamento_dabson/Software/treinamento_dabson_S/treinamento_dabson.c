#PRNAME treinamento_dabson
#DIRNAM "C:\Users\ferre\Desktop\IC Luciano\Treniamento 2021\variaveis_06_05_21\treinamentoRedesNeurais\treinamento_dabson\Hardware\treinamento_dabson_H"
#DATYPE 1
#NBMANT 13
#NBEXPO 7
#NDSTAC 4
#SDEPTH 4
#NUIOIN 4
#NUIOOU 4

void main() 
{
    //COLOCAR HARDCODE CADA X
    //float X[0] = in(0)
    //float X[1] = in(1);
    //float X[2] = in(2);
    //float X[3] = in(3);
    //float X[4] = in(4);
    //float X[5] = in(5);
    //float X[6] = in(6);
    //float X[7] = in(7);
    //float X[8] = in(8);
    //float X[9] = in(9);
    
    int N  = 1000; 
    int h     = 8;    // número de neuronios
    int p     = 10;
    int epoca = 1;
    float lmbd  = 0.0;  //não sei o q é
    //t sera um outro sinal de entrada////////////////////////////////////////OLHAR!!!!!!!
    
    float W1_0[11];
    float W1_1[11];
    float W1_2[11];
    float W1_3[11];
    float W1_4[11];
    float W1_5[11];
    float W1_6[11];
    float W1_7[11];
    
    float W1_0[0] = -0.0612187178835884;
    float W1_0[1] = 0.203963882803273;
    float W1_0[2] = 0.826674723003339;
    float W1_0[3] = 0.923796161710107;
    float W1_0[4] = 0.600136960448615;
    float W1_0[5] = 0.159409174731140;
    float W1_0[6] = -0.848066616618316;
    float W1_0[7] = 0.889574379443292;
    float W1_0[8] = -0.220522326077493;
    float W1_0[9] = -0.880440914105688;
    float W1_0[10] =0.463444771317341;
     
    float W1_1[0] = -0.976195860997517;
    float W1_1[1] = -0.474057430919711;
    float W1_1[2] = -0.695243962061554;
    float W1_1[3] = -0.990731551731865;
    float W1_1[4] = -0.137172345072911;
    float W1_1[5] = 0.0997204036726640;
    float W1_1[6] = -0.520167692892684;
    float W1_1[7] = -0.0182718150638401;
    float W1_1[8] = -0.516617428172335;
    float W1_1[9] = -0.530440173255187;
    float W1_1[10] =0.295491926272613;

    float W1_2[0] = -0.325754711202237;
    float W1_2[1] = 0.308158196953565;
    float W1_2[2] = 0.651633954979095;
    float W1_2[3] = 0.549820929423005;
    float W1_2[4] = 0.821295188859046;
    float W1_2[5] = -0.710090403552546;
    float W1_2[6] = -0.753362130329669;
    float W1_2[7] = -0.0214947231999623;
    float W1_2[8] = -0.192175708823771;
    float W1_2[9] = -0.293682857555858;
    float W1_2[10] =-0.0981525871381102;

    float W1_3[0] = -0.675635383613515;
    float W1_3[1] = 0.378429006280016;
    float W1_3[2] = 0.0766848705201142;
    float W1_3[3] = 0.634606441306866;
    float W1_3[4] = -0.636305943394295;
    float W1_3[5] = 0.706062235443787;
    float W1_3[6] = -0.632184423435167;
    float W1_3[7] = -0.324561180357246;
    float W1_3[8] = -0.807090949663223;
    float W1_3[9] = 0.642388080395918;
    float W1_3[10] =0.0940177845726899;

    float W1_4[0] = 0.588569081367814;
    float W1_4[1] = 0.496303185647419;
    float W1_4[2] = 0.992269433253771;
    float W1_4[3] = 0.737389410727019;
    float W1_4[4] = -0.472394166956020;
    float W1_4[5] = 0.244110262970132;
    float W1_4[6] = -0.520094948670195;
    float W1_4[7] = 0.800107692835324;
    float W1_4[8] = -0.736053414787330;
    float W1_4[9] = -0.969193124696890;
    float W1_4[10] =-0.407358388784454;

    float W1_5[0] = -0.377569915910390;
    float W1_5[1] = -0.0989168029950045;
    float W1_5[2] = -0.843648942493633;
    float W1_5[3] = -0.831128308978179;
    float W1_5[4] = -0.708922039230566;
    float W1_5[5] = -0.298095238215458;
    float W1_5[6] = -0.165465861831261;
    float W1_5[7] = -0.261506437759570;
    float W1_5[8] = 0.884101181550970;
    float W1_5[9] = -0.913952396684384;
    float W1_5[10] =0.489385614148312;

    float W1_6[0] = 0.0570662710124255;
    float W1_6[1] = -0.832357244006135;
    float W1_6[2] = -0.114643460449107;
    float W1_6[3] = -0.200434701802207;
    float W1_6[4] = -0.727862882582673;
    float W1_6[5] = 0.0264990797341067;
    float W1_6[6] = -0.900691139348516;
    float W1_6[7] = -0.777594489412425;
    float W1_6[8] = 0.912269080459605;
    float W1_6[9] = -0.662019941074591;
    float W1_6[10] = -0.622089969934911;

    float W1_7[0] = -0.668702541000438;
    float W1_7[1] = -0.542046062566362;
    float W1_7[2] = -0.786694459638831;
    float W1_7[3] = -0.480259194298692;
    float W1_7[4] = 0.738584415280179;
    float W1_7[5] = -0.196383932496117;
    float W1_7[6] = 0.805432219830562;
    float W1_7[7] = 0.560504136642276;
    float W1_7[8] = 0.150417190156931;
    float W1_7[9] = 0.298230949912904;
    float W1_7[10] = 0.373550866730630;
     
    float W2[0]=    -0.632977688525461  ;  
    float W2[1]=    -0.263030807019327  ;
    float W2[2]=    0.251237121459381   ;
    float W2[3]=    0.560454870302754   ;
    float W2[4]=    -0.837748462268430  ;
    float W2[5]=    0.858771941937460   ;
    float W2[6]=    0.551425357216805   ;
    float W2[7]=    -0.0264167351936553 ;
    
    
    
    float muini = 0.001;
    float mi = muini;
    int beta = 10;
    int ep = 0;
    
    
    while (ep<=epoca)
    {   int L = 0;
        while(L<=N-p-1){
            
            float T = t(L+fix(p-p/2));
            
            int i = 1;
            float Xb[10];
            Xb[0] = 1;
            while (i <=10){
                Xb[i] = X[i];
                i++;
            }// tamanho 11
            int i = 0;
            float intermediario_0 = 0;
            float intermediario_1 = 0;
            float intermediario_2 = 0;
            float intermediario_3 = 0;
            float intermediario_4 = 0;
            float intermediario_5 = 0;
            float intermediario_6 = 0;
            float intermediario_7 = 0;
            while(i<=7){
                
                intermediario_0 += W1_0[i]*X[i];
                intermediario_1 += W1_1[i]*X[i];
                intermediario_2 += W1_2[i]*X[i];
                intermediario_3 += W1_3[i]*X[i];
                intermediario_4 += W1_4[i]*X[i];
                intermediario_4 += W1_5[i]*X[i];
                intermediario_6 += W1_6[i]*X[i];
                intermediario_7 += W1_7[i]*X[i];
                i++
            }
            
            float ponderacao1[8];
            
            ponderacao1[0] = intermediario_0; 
            ponderacao1[1] = intermediario_1; 
            ponderacao1[2] = intermediario_2; 
            ponderacao1[3] = intermediario_3;
            ponderacao1[4] = intermediario_4; 
            ponderacao1[5] = intermediario_5; 
            ponderacao1[6] = intermediario_6; 
            ponderacao1[7] = intermediario_7;  
            
            
            float saida1[8];
            
            int i = 0;
            while(i<=7){
                saida1[i] = tangh(ponderacao[i]);
                i++;
            }
            
            float Yb[9];
            Xb[0] = 1;
            int i = 1;
            while (i <=8){
                Yb[i] = saida1[i];
                i+=;
            }
            int i = 0;
            float ponderacao2=0;
            while(i<=9){
                ponderacao2+=Yb[i]*saida1[i];
                i++;
            }
            
            saida2 = ponderacao2;
            
            L+=;
        }
        ep+=;    
    }
    
}