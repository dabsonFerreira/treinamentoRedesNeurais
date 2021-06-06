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
    float lmbd  = 0.0;
    int L = 0;  //não sei o q é
    //t sera um outro sinal de entrada////////////////////////////////////////OLHAR!!!!!!!
    
    float W1_0[11];
    float W1_1[11];
    float W1_2[11];
    float W1_3[11];
    float W1_4[11];
    float W1_5[11];
    float W1_6[11];
    float W1_7[11];
    
    
    W1_0[0] = -0.0612187178835884;
    W1_0[1] = 0.203963882803273;
    W1_0[2] = 0.826674723003339;
    W1_0[3] = 0.923796161710107;
    W1_0[4] = 0.600136960448615;
    W1_0[5] = 0.159409174731140;
    W1_0[6] = -0.848066616618316;
    W1_0[7] = 0.889574379443292;
    W1_0[8] = -0.220522326077493;
    W1_0[9] = -0.880440914105688;
    W1_0[10] =0.463444771317341;
    
    W1_1[0] = -0.976195860997517;
    W1_1[1] = -0.474057430919711;
    W1_1[2] = -0.695243962061554;
    W1_1[3] = -0.990731551731865;
    W1_1[4] = -0.137172345072911;
    W1_1[5] = 0.0997204036726640;
    W1_1[6] = -0.520167692892684;
    W1_1[7] = -0.0182718150638401;
    W1_1[8] = -0.516617428172335;
    W1_1[9] = -0.530440173255187;
    W1_1[10] =0.295491926272613;

    W1_2[0] = -0.325754711202237;
    W1_2[1] = 0.308158196953565;
    W1_2[2] = 0.651633954979095;
    W1_2[3] = 0.549820929423005;
    W1_2[4] = 0.821295188859046;
    W1_2[5] = -0.710090403552546;
    W1_2[6] = -0.753362130329669;
    W1_2[7] = -0.0214947231999623;
    W1_2[8] = -0.192175708823771;
    W1_2[9] = -0.293682857555858;
    W1_2[10] =-0.0981525871381102;

    W1_3[0] = -0.675635383613515;
    W1_3[1] = 0.378429006280016;
    W1_3[2] = 0.0766848705201142;
    W1_3[3] = 0.634606441306866;
    W1_3[4] = -0.636305943394295;
    W1_3[5] = 0.706062235443787;
    W1_3[6] = -0.632184423435167;
    W1_3[7] = -0.324561180357246;
    W1_3[8] = -0.807090949663223;
    W1_3[9] = 0.642388080395918;
    W1_3[10] =0.0940177845726899;

    W1_4[0] = 0.588569081367814;
    W1_4[1] = 0.496303185647419;
    W1_4[2] = 0.992269433253771;
    W1_4[3] = 0.737389410727019;
    W1_4[4] = -0.472394166956020;
    W1_4[5] = 0.244110262970132;
    W1_4[6] = -0.520094948670195;
    W1_4[7] = 0.800107692835324;
    W1_4[8] = -0.736053414787330;
    W1_4[9] = -0.969193124696890;
    W1_4[10] =-0.407358388784454;

    W1_5[0] = -0.377569915910390;
    W1_5[1] = -0.0989168029950045;
    W1_5[2] = -0.843648942493633;
    W1_5[3] = -0.831128308978179;
    W1_5[4] = -0.708922039230566;
    W1_5[5] = -0.298095238215458;
    W1_5[6] = -0.165465861831261;
    W1_5[7] = -0.261506437759570;
    W1_5[8] = 0.884101181550970;
    W1_5[9] = -0.913952396684384;
    W1_5[10] =0.489385614148312;

    W1_6[0] = 0.0570662710124255;
    W1_6[1] = -0.832357244006135;
    W1_6[2] = -0.114643460449107;
    W1_6[3] = -0.200434701802207;
    W1_6[4] = -0.727862882582673;
    W1_6[5] = 0.0264990797341067;
    W1_6[6] = -0.900691139348516;
    W1_6[7] = -0.777594489412425;
    W1_6[8] = 0.912269080459605;
    W1_6[9] = -0.662019941074591;
    W1_6[10] = -0.622089969934911;

    W1_7[0] = -0.668702541000438;
    W1_7[1] = -0.542046062566362;
    W1_7[2] = -0.786694459638831;
    W1_7[3] = -0.480259194298692;
    W1_7[4] = 0.738584415280179;
    W1_7[5] = -0.196383932496117;
    W1_7[6] = 0.805432219830562;
    W1_7[7] = 0.560504136642276;
    W1_7[8] = 0.150417190156931;
    W1_7[9] = 0.298230949912904;
    W1_7[10] = 0.373550866730630;
    
    float W2[8];
    
          W2[0]=    -0.632977688525461  ;  
          W2[1]=    -0.263030807019327  ;
          W2[2]=    0.251237121459381   ;
          W2[3]=    0.560454870302754   ;
          W2[4]=    -0.837748462268430  ;
          W2[5]=    0.858771941937460   ;
          W2[6]=    0.551425357216805   ;
          W2[7]=    -0.0264167351936553 ;
    
    
    
    float muini = 0.001;
    float mi = muini;
    int beta = 10;
    int ep = 0;
    
    int i = 1;
    
   
    float Xb[11];
    float ponderacao1[8];
    float saida1[8];
    float ponderacao2=0;
    float Yb[9];
    float a;
    float mJ1temp[11];
    int o = 0;
    float wdab[11];
    float H_0[97];
    float H_1[97];
    float H_2[97];
    float H_3[97];
    float H_4[97];
    float H_5[97];
    float H_6[97];
    float H_7[97];
    float H_8[97];
    float H_9[97];
    float H_10[97];
    float H_11[97];
    float H_12[97];
    float H_13[97];
    float H_14[97];
    float H_15[97];
    float H_16[97];
    float H_17[97];
    float H_18[97];
    float H_19[97];
    float H_20[97];
    float H_21[97];
    float H_22[97];
    float H_23[97];
    float H_24[97];
    float H_25[97];
    float H_26[97];
    float H_27[97];
    float H_28[97];
    float H_29[97];
    float H_30[97];
    float H_31[97];
    float H_32[97];
    float H_33[97];
    float H_34[97];
    float H_35[97];
    float H_36[97];
    float H_37[97];
    float H_38[97];
    float H_39[97];
    float H_40[97];
    float H_41[97];
    float H_42[97];
    float H_43[97];
    float H_44[97];
    float H_45[97];
    float H_46[97];
    float H_47[97];
    float H_48[97];
    float H_49[97];
    float H_50[97];
    float H_51[97];
    float H_52[97];
    float H_53[97];
    float H_54[97];
    float H_55[97];
    float H_56[97];
    float H_57[97];
    float H_58[97];
    float H_59[97];
    float H_60[97];
    float H_61[97];
    float H_62[97];
    float H_63[97];
    float H_64[97];
    float H_65[97];
    float H_66[97];
    float H_67[97];
    float H_68[97];
    float H_69[97];
    float H_70[97];
    float H_71[97];
    float H_72[97];
    float H_73[97];
    float H_74[97];
    float H_75[97];
    float H_76[97];
    float H_77[97];
    float H_78[97];
    float H_79[97];
    float H_80[97];
    float H_81[97];
    float H_82[97];
    float H_83[97];
    float H_84[97];
    float H_85[97];
    float H_86[97];
    float H_87[97];
    float H_88[97];
    float H_89[97];
    float H_90[97];
    float H_91[97];
    float H_92[97];
    float H_93[97];
    float H_94[97];
    float H_95[97];
    float H_96[97];
    
    
    float iden_0[97];
    float iden_1[97];
    float iden_2[97];
    float iden_3[97];
    float iden_4[97];
    float iden_5[97];
    float iden_6[97];
    float iden_7[97];
    float iden_8[97];
    float iden_9[97];
    float iden_10[97];
    float iden_11[97];
    float iden_12[97];
    float iden_13[97];
    float iden_14[97];
    float iden_15[97];
    float iden_16[97];
    float iden_17[97];
    float iden_18[97];
    float iden_19[97];
    float iden_20[97];
    float iden_21[97];
    float iden_22[97];
    float iden_23[97];
    float iden_24[97];
    float iden_25[97];
    float iden_26[97];
    float iden_27[97];
    float iden_28[97];
    float iden_29[97];
    float iden_30[97];
    float iden_31[97];
    float iden_32[97];
    float iden_33[97];
    float iden_34[97];
    float iden_35[97];
    float iden_36[97];
    float iden_37[97];
    float iden_38[97];
    float iden_39[97];
    float iden_40[97];
    float iden_41[97];
    float iden_42[97];
    float iden_43[97];
    float iden_44[97];
    float iden_45[97];
    float iden_46[97];
    float iden_47[97];
    float iden_48[97];
    float iden_49[97];
    float iden_50[97];
    float iden_51[97];
    float iden_52[97];
    float iden_53[97];
    float iden_54[97];
    float iden_55[97];
    float iden_56[97];
    float iden_57[97];
    float iden_58[97];
    float iden_59[97];
    float iden_60[97];
    float iden_61[97];
    float iden_62[97];
    float iden_63[97];
    float iden_64[97];
    float iden_65[97];
    float iden_66[97];
    float iden_67[97];
    float iden_68[97];
    float iden_69[97];
    float iden_70[97];
    float iden_71[97];
    float iden_72[97];
    float iden_73[97];
    float iden_74[97];
    float iden_75[97];
    float iden_76[97];
    float iden_77[97];
    float iden_78[97];
    float iden_79[97];
    float iden_80[97];
    float iden_81[97];
    float iden_82[97];
    float iden_83[97];
    float iden_84[97];
    float iden_85[97];
    float iden_86[97];
    float iden_87[97];
    float iden_88[97];
    float iden_89[97];
    float iden_90[97];
    float iden_91[97];
    float iden_92[97];
    float iden_93[97];
    float iden_94[97];
    float iden_95[97];
    float iden_96[97];

    
    iden_0[0] = 1;
    iden_1[1] = 1;
    iden_2[2] = 1;
    iden_3[3] = 1;
    iden_4[4] = 1;
    iden_5[5] = 1;
    iden_6[6] = 1;
    iden_7[7] = 1;
    iden_8[8] = 1;
    iden_9[9] = 1;
    iden_10[10] = 1;
    iden_11[11] = 1;
    iden_12[12] = 1;
    iden_13[13] = 1;
    iden_14[14] = 1;
    iden_15[15] = 1;
    iden_16[16] = 1;
    iden_17[17] = 1;
    iden_18[18] = 1;
    iden_19[19] = 1;
    iden_20[20] = 1;
    iden_21[21] = 1;
    iden_22[22] = 1;
    iden_23[23] = 1;
    iden_24[24] = 1;
    iden_25[25] = 1;
    iden_26[26] = 1;
    iden_27[27] = 1;
    iden_28[28] = 1;
    iden_29[29] = 1;
    iden_30[30] = 1;
    iden_31[31] = 1;
    iden_32[32] = 1;
    iden_33[33] = 1;
    iden_34[34] = 1;
    iden_35[35] = 1;
    iden_36[36] = 1;
    iden_37[37] = 1;
    iden_38[38] = 1;
    iden_39[39] = 1;
    iden_40[40] = 1;
    iden_41[41] = 1;
    iden_42[42] = 1;
    iden_43[43] = 1;
    iden_44[44] = 1;
    iden_45[45] = 1;
    iden_46[46] = 1;
    iden_47[47] = 1;
    iden_48[48] = 1;
    iden_49[49] = 1;
    iden_50[50] = 1;
    iden_51[51] = 1;
    iden_52[52] = 1;
    iden_53[53] = 1;
    iden_54[54] = 1;
    iden_55[55] = 1;
    iden_56[56] = 1;
    iden_57[57] = 1;
    iden_58[58] = 1;
    iden_59[59] = 1;
    iden_60[60] = 1;
    iden_61[61] = 1;
    iden_62[62] = 1;
    iden_63[63] = 1;
    iden_64[64] = 1;
    iden_65[65] = 1;
    iden_66[66] = 1;
    iden_67[67] = 1;
    iden_68[68] = 1;
    iden_69[69] = 1;
    iden_70[70] = 1;
    iden_71[71] = 1;
    iden_72[72] = 1;
    iden_73[73] = 1;
    iden_74[74] = 1;
    iden_75[75] = 1;
    iden_76[76] = 1;
    iden_77[77] = 1;
    iden_78[78] = 1;
    iden_79[79] = 1;
    iden_80[80] = 1;
    iden_81[81] = 1;
    iden_82[82] = 1;
    iden_83[83] = 1;
    iden_84[84] = 1;
    iden_85[85] = 1;
    iden_86[86] = 1;
    iden_87[87] = 1;
    iden_88[88] = 1;
    iden_89[89] = 1;
    iden_90[90] = 1;
    iden_91[91] = 1;
    iden_92[92] = 1;
    iden_93[93] = 1;
    iden_94[94] = 1;
    iden_95[95] = 1;
    iden_96[96] = 1;
    
    float M_0[97];
    float M_1[97];
    float M_2[97];
    float M_3[97];
    float M_4[97];
    float M_5[97];
    float M_6[97];
    float M_7[97];
    float M_8[97];
    float M_9[97];
    float M_10[97];
    float M_11[97];
    float M_12[97];
    float M_13[97];
    float M_14[97];
    float M_15[97];
    float M_16[97];
    float M_17[97];
    float M_18[97];
    float M_19[97];
    float M_20[97];
    float M_21[97];
    float M_22[97];
    float M_23[97];
    float M_24[97];
    float M_25[97];
    float M_26[97];
    float M_27[97];
    float M_28[97];
    float M_29[97];
    float M_30[97];
    float M_31[97];
    float M_32[97];
    float M_33[97];
    float M_34[97];
    float M_35[97];
    float M_36[97];
    float M_37[97];
    float M_38[97];
    float M_39[97];
    float M_40[97];
    float M_41[97];
    float M_42[97];
    float M_43[97];
    float M_44[97];
    float M_45[97];
    float M_46[97];
    float M_47[97];
    float M_48[97];
    float M_49[97];
    float M_50[97];
    float M_51[97];
    float M_52[97];
    float M_53[97];
    float M_54[97];
    float M_55[97];
    float M_56[97];
    float M_57[97];
    float M_58[97];
    float M_59[97];
    float M_60[97];
    float M_61[97];
    float M_62[97];
    float M_63[97];
    float M_64[97];
    float M_65[97];
    float M_66[97];
    float M_67[97];
    float M_68[97];
    float M_69[97];
    float M_70[97];
    float M_71[97];
    float M_72[97];
    float M_73[97];
    float M_74[97];
    float M_75[97];
    float M_76[97];
    float M_77[97];
    float M_78[97];
    float M_79[97];
    float M_80[97];
    float M_81[97];
    float M_82[97];
    float M_83[97];
    float M_84[97];
    float M_85[97];
    float M_86[97];
    float M_87[97];
    float M_88[97];
    float M_89[97];
    float M_90[97];
    float M_91[97];
    float M_92[97];
    float M_93[97];
    float M_94[97];
    float M_95[97];
    float M_96[97];

    
    float soma_0[97];
    float soma_1[97];
    float soma_2[97];
    float soma_3[97];
    float soma_4[97];
    float soma_5[97];
    float soma_6[97];
    float soma_7[97];
    float soma_8[97];
    float soma_9[97];
    float soma_10[97];
    float soma_11[97];
    float soma_12[97];
    float soma_13[97];
    float soma_14[97];
    float soma_15[97];
    float soma_16[97];
    float soma_17[97];
    float soma_18[97];
    float soma_19[97];
    float soma_20[97];
    float soma_21[97];
    float soma_22[97];
    float soma_23[97];
    float soma_24[97];
    float soma_25[97];
    float soma_26[97];
    float soma_27[97];
    float soma_28[97];
    float soma_29[97];
    float soma_30[97];
    float soma_31[97];
    float soma_32[97];
    float soma_33[97];
    float soma_34[97];
    float soma_35[97];
    float soma_36[97];
    float soma_37[97];
    float soma_38[97];
    float soma_39[97];
    float soma_40[97];
    float soma_41[97];
    float soma_42[97];
    float soma_43[97];
    float soma_44[97];
    float soma_45[97];
    float soma_46[97];
    float soma_47[97];
    float soma_48[97];
    float soma_49[97];
    float soma_50[97];
    float soma_51[97];
    float soma_52[97];
    float soma_53[97];
    float soma_54[97];
    float soma_55[97];
    float soma_56[97];
    float soma_57[97];
    float soma_58[97];
    float soma_59[97];
    float soma_60[97];
    float soma_61[97];
    float soma_62[97];
    float soma_63[97];
    float soma_64[97];
    float soma_65[97];
    float soma_66[97];
    float soma_67[97];
    float soma_68[97];
    float soma_69[97];
    float soma_70[97];
    float soma_71[97];
    float soma_72[97];
    float soma_73[97];
    float soma_74[97];
    float soma_75[97];
    float soma_76[97];
    float soma_77[97];
    float soma_78[97];
    float soma_79[97];
    float soma_80[97];
    float soma_81[97];
    float soma_82[97];
    float soma_83[97];
    float soma_84[97];
    float soma_85[97];
    float soma_86[97];
    float soma_87[97];
    float soma_88[97];
    float soma_89[97];
    float soma_90[97];
    float soma_91[97];
    float soma_92[97];
    float soma_93[97];
    float soma_94[97];
    float soma_95[97];
    float soma_96[97];


    float inve_0[97];
    float inve_1[97];
    float inve_2[97];
    float inve_3[97];
    float inve_4[97];
    float inve_5[97];
    float inve_6[97];
    float inve_7[97];
    float inve_8[97];
    float inve_9[97];
    float inve_10[97];
    float inve_11[97];
    float inve_12[97];
    float inve_13[97];
    float inve_14[97];
    float inve_15[97];
    float inve_16[97];
    float inve_17[97];
    float inve_18[97];
    float inve_19[97];
    float inve_20[97];
    float inve_21[97];
    float inve_22[97];
    float inve_23[97];
    float inve_24[97];
    float inve_25[97];
    float inve_26[97];
    float inve_27[97];
    float inve_28[97];
    float inve_29[97];
    float inve_30[97];
    float inve_31[97];
    float inve_32[97];
    float inve_33[97];
    float inve_34[97];
    float inve_35[97];
    float inve_36[97];
    float inve_37[97];
    float inve_38[97];
    float inve_39[97];
    float inve_40[97];
    float inve_41[97];
    float inve_42[97];
    float inve_43[97];
    float inve_44[97];
    float inve_45[97];
    float inve_46[97];
    float inve_47[97];
    float inve_48[97];
    float inve_49[97];
    float inve_50[97];
    float inve_51[97];
    float inve_52[97];
    float inve_53[97];
    float inve_54[97];
    float inve_55[97];
    float inve_56[97];
    float inve_57[97];
    float inve_58[97];
    float inve_59[97];
    float inve_60[97];
    float inve_61[97];
    float inve_62[97];
    float inve_63[97];
    float inve_64[97];
    float inve_65[97];
    float inve_66[97];
    float inve_67[97];
    float inve_68[97];
    float inve_69[97];
    float inve_70[97];
    float inve_71[97];
    float inve_72[97];
    float inve_73[97];
    float inve_74[97];
    float inve_75[97];
    float inve_76[97];
    float inve_77[97];
    float inve_78[97];
    float inve_79[97];
    float inve_80[97];
    float inve_81[97];
    float inve_82[97];
    float inve_83[97];
    float inve_84[97];
    float inve_85[97];
    float inve_86[97];
    float inve_87[97];
    float inve_88[97];
    float inve_89[97];
    float inve_90[97];
    float inve_91[97];
    float inve_92[97];
    float inve_93[97];
    float inve_94[97];
    float inve_95[97];
    float inve_96[97];


    
    
    int z = p-p/2;
    float T;
    float E;
    float Ean;
    float g[97];

    int contadora1 = 0;
    int contadora2 = 0;
    float J[97];
    
    while (ep<=epoca)
    {   L = 0;
        while(L<=N-p-1){
            
            T = t(L+z));            
            
            Xb[0] = 1;
            while (i <=10){
                Xb[i] = X[i];
                i++;
            }// tamanho 11
            
            i = 0;
            float intermediario_0 = 0;
            float intermediario_1 = 0;
            float intermediario_2 = 0;
            float intermediario_3 = 0;
            float intermediario_4 = 0;
            float intermediario_5 = 0;
            float intermediario_6 = 0;
            float intermediario_7 = 0;
            while(i<=7){
                
                intermediario_0 += W1_0[i]*Xb[i];
                intermediario_1 += W1_1[i]*Xb[i];
                intermediario_2 += W1_2[i]*Xb[i];
                intermediario_3 += W1_3[i]*Xb[i];
                intermediario_4 += W1_4[i]*Xb[i];
                intermediario_4 += W1_5[i]*Xb[i];
                intermediario_6 += W1_6[i]*Xb[i];
                intermediario_7 += W1_7[i]*Xb[i];
                i++
            }
            
            
            
            ponderacao1[0] = intermediario_0; 
            ponderacao1[1] = intermediario_1; 
            ponderacao1[2] = intermediario_2; 
            ponderacao1[3] = intermediario_3;
            ponderacao1[4] = intermediario_4; 
            ponderacao1[5] = intermediario_5; 
            ponderacao1[6] = intermediario_6; 
            ponderacao1[7] = intermediario_7;  
            
            
            
            
           i = 0;
           
            while(i<=7){
                saida1[i] = tangh(ponderacao[i]);//MARI AKI!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                i++;
            }
            
            
            Yb[0] = 1;
            
            i = 1;
            
            while (i <=8){
                Yb[i] = saida1[i];
                i++;
            }
            
            i = 0;
           
            
            while(i<=9){
                ponderacao2+=W2[i]*Yb[i];
                i++;
            }
            
            E = T - ponderacao2;
            Ean(ep) = mse(E);
            
            i = 0;
            
            while(i<=h-1){
                a = saida1[i]*saida1[i];
                a = 1-a;
                a = a*W2(i+1;);
                
                while(o<=10){
                    mJ1temp[o]  = a*Xb[o];
                    o++;
                }
                
                mJ1temp = - mJ1temp;
                o       = 0;
                if (i == 0){
                   
                   while(o<=10){
                       W[o]  = W1_0[o]; //TAMANHO 11
                       J1[o] = mJ1temp[o]; //TAMANHO 11
                       o++;
                   }   
                }
                contadora1 = o+1;
                
                o          = 0;
                if (i == 1){
                    while(o<=10){
                        W[contadora1] = W1_1[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                }
                o         = 0;
                if (i == 2){
                    while(o<=10){
                        W[contadora1] = W1_2[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                
                }
                o         = 0;
                if (i == 3){
                    while(o<=10){
                        W[contadora1] = W1_3[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                }
                o         = 0;
                if (i == 4){
                    while(o<=10){
                        W[contadora1] = W1_4[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                
                }
                o         = 0;
                if (i == 5){
                    while(o<=10){
                        W[contadora1] = W1_5[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                }
                o         = 0;
                if (i == 6){
                    while(o<=10){
                        W[contadora1] = W1_6[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                }
                o         = 0;
                if (i == 7){
                    while(o<=10){
                        W[contadora1] = W1_7[o];
                        J1[contadora1] = mJ1temp[o]
                        contadora1++;
                        o++;
                    }
                } 
                    
                i++;
            }
            
            o = 0;
            J = J1;
            
            while(o<=8){
                W[contadora1] = W2[o];
                J[contadora1] = -Yb[o];
                contadora1++;
                o++;
            }
            
            w = W;
            
            i = 0;
            while(i<=96){
                H_0 = J[i]*J[0]/N;
                H_1 = J[i]*J[1]/N;
                H_2 = J[i]*J[2]/N;
                H_3 = J[i]*J[3]/N;
                H_4 = J[i]*J[4]/N;
                H_5 = J[i]*J[5]/N;
                H_6 = J[i]*J[6]/N;
                H_7 = J[i]*J[7]/N;
                H_8 = J[i]*J[8]/N;
                H_9 = J[i]*J[9]/N;
                H_10 = J[i]*J[10]/N;
                H_11 = J[i]*J[11]/N;
                H_12 = J[i]*J[12]/N;
                H_13 = J[i]*J[13]/N;
                H_14 = J[i]*J[14]/N;
                H_15 = J[i]*J[15]/N;
                H_16 = J[i]*J[16]/N;
                H_17 = J[i]*J[17]/N;
                H_18 = J[i]*J[18]/N;
                H_19 = J[i]*J[19]/N;
                H_20 = J[i]*J[20]/N;
                H_21 = J[i]*J[21]/N;
                H_22 = J[i]*J[22]/N;
                H_23 = J[i]*J[23]/N;
                H_24 = J[i]*J[24]/N;
                H_25 = J[i]*J[25]/N;
                H_26 = J[i]*J[26]/N;
                H_27 = J[i]*J[27]/N;
                H_28 = J[i]*J[28]/N;
                H_29 = J[i]*J[29]/N;
                H_30 = J[i]*J[30]/N;
                H_31 = J[i]*J[31]/N;
                H_32 = J[i]*J[32]/N;
                H_33 = J[i]*J[33]/N;
                H_34 = J[i]*J[34]/N;
                H_35 = J[i]*J[35]/N;
                H_36 = J[i]*J[36]/N;
                H_37 = J[i]*J[37]/N;
                H_38 = J[i]*J[38]/N;
                H_39 = J[i]*J[39]/N;
                H_40 = J[i]*J[40]/N;
                H_41 = J[i]*J[41]/N;
                H_42 = J[i]*J[42]/N;
                H_43 = J[i]*J[43]/N;
                H_44 = J[i]*J[44]/N;
                H_45 = J[i]*J[45]/N;
                H_46 = J[i]*J[46]/N;
                H_47 = J[i]*J[47]/N;
                H_48 = J[i]*J[48]/N;
                H_49 = J[i]*J[49]/N;
                H_50 = J[i]*J[50]/N;
                H_51 = J[i]*J[51]/N;
                H_52 = J[i]*J[52]/N;
                H_53 = J[i]*J[53]/N;
                H_54 = J[i]*J[54]/N;
                H_55 = J[i]*J[55]/N;
                H_56 = J[i]*J[56]/N;
                H_57 = J[i]*J[57]/N;
                H_58 = J[i]*J[58]/N;
                H_59 = J[i]*J[59]/N;
                H_60 = J[i]*J[60]/N;
                H_61 = J[i]*J[61]/N;
                H_62 = J[i]*J[62]/N;
                H_63 = J[i]*J[63]/N;
                H_64 = J[i]*J[64]/N;
                H_65 = J[i]*J[65]/N;
                H_66 = J[i]*J[66]/N;
                H_67 = J[i]*J[67]/N;
                H_68 = J[i]*J[68]/N;
                H_69 = J[i]*J[69]/N;
                H_70 = J[i]*J[70]/N;
                H_71 = J[i]*J[71]/N;
                H_72 = J[i]*J[72]/N;
                H_73 = J[i]*J[73]/N;
                H_74 = J[i]*J[74]/N;
                H_75 = J[i]*J[75]/N;
                H_76 = J[i]*J[76]/N;
                H_77 = J[i]*J[77]/N;
                H_78 = J[i]*J[78]/N;
                H_79 = J[i]*J[79]/N;
                H_80 = J[i]*J[80]/N;
                H_81 = J[i]*J[81]/N;
                H_82 = J[i]*J[82]/N;
                H_83 = J[i]*J[83]/N;
                H_84 = J[i]*J[84]/N;
                H_85 = J[i]*J[85]/N;
                H_86 = J[i]*J[86]/N;
                H_87 = J[i]*J[87]/N;
                H_88 = J[i]*J[88]/N;
                H_89 = J[i]*J[89]/N;
                H_90 = J[i]*J[90]/N;
                H_91 = J[i]*J[91]/N;
                H_92 = J[i]*J[92]/N;
                H_93 = J[i]*J[93]/N;
                H_94 = J[i]*J[94]/N;
                H_95 = J[i]*J[95]/N;
                H_96 = J[i]*J[96]/N;
                i++;
            }
            i = 0;
            while(i<=96){
                g[i] = J[i]*E/N;
                i++;
            }
            
            M_0[0] = iden_0[0]*mi;
            M_1[1] = iden_1[1]*mi;
            M_2[2] = iden_2[2]*mi;
            M_3[3] = iden_3[3]*mi;
            M_4[4] = iden_4[4]*mi;
            M_5[5] = iden_5[5]*mi;
            M_6[6] = iden_6[6]*mi;
            M_7[7] = iden_7[7]*mi;
            M_8[8] = iden_8[8]*mi;
            M_9[9] = iden_9[9]*mi;
            M_10[10] = iden_10[10]*mi;
            M_11[11] = iden_11[11]*mi;
            M_12[12] = iden_12[12]*mi;
            M_13[13] = iden_13[13]*mi;
            M_14[14] = iden_14[14]*mi;
            M_15[15] = iden_15[15]*mi;
            M_16[16] = iden_16[16]*mi;
            M_17[17] = iden_17[17]*mi;
            M_18[18] = iden_18[18]*mi;
            M_19[19] = iden_19[19]*mi;
            M_20[20] = iden_20[20]*mi;
            M_21[21] = iden_21[21]*mi;
            M_22[22] = iden_22[22]*mi;
            M_23[23] = iden_23[23]*mi;
            M_24[24] = iden_24[24]*mi;
            M_25[25] = iden_25[25]*mi;
            M_26[26] = iden_26[26]*mi;
            M_27[27] = iden_27[27]*mi;
            M_28[28] = iden_28[28]*mi;
            M_29[29] = iden_29[29]*mi;
            M_30[30] = iden_30[30]*mi;
            M_31[31] = iden_31[31]*mi;
            M_32[32] = iden_32[32]*mi;
            M_33[33] = iden_33[33]*mi;
            M_34[34] = iden_34[34]*mi;
            M_35[35] = iden_35[35]*mi;
            M_36[36] = iden_36[36]*mi;
            M_37[37] = iden_37[37]*mi;
            M_38[38] = iden_38[38]*mi;
            M_39[39] = iden_39[39]*mi;
            M_40[40] = iden_40[40]*mi;
            M_41[41] = iden_41[41]*mi;
            M_42[42] = iden_42[42]*mi;
            M_43[43] = iden_43[43]*mi;
            M_44[44] = iden_44[44]*mi;
            M_45[45] = iden_45[45]*mi;
            M_46[46] = iden_46[46]*mi;
            M_47[47] = iden_47[47]*mi;
            M_48[48] = iden_48[48]*mi;
            M_49[49] = iden_49[49]*mi;
            M_50[50] = iden_50[50]*mi;
            M_51[51] = iden_51[51]*mi;
            M_52[52] = iden_52[52]*mi;
            M_53[53] = iden_53[53]*mi;
            M_54[54] = iden_54[54]*mi;
            M_55[55] = iden_55[55]*mi;
            M_56[56] = iden_56[56]*mi;
            M_57[57] = iden_57[57]*mi;
            M_58[58] = iden_58[58]*mi;
            M_59[59] = iden_59[59]*mi;
            M_60[60] = iden_60[60]*mi;
            M_61[61] = iden_61[61]*mi;
            M_62[62] = iden_62[62]*mi;
            M_63[63] = iden_63[63]*mi;
            M_64[64] = iden_64[64]*mi;
            M_65[65] = iden_65[65]*mi;
            M_66[66] = iden_66[66]*mi;
            M_67[67] = iden_67[67]*mi;
            M_68[68] = iden_68[68]*mi;
            M_69[69] = iden_69[69]*mi;
            M_70[70] = iden_70[70]*mi;
            M_71[71] = iden_71[71]*mi;
            M_72[72] = iden_72[72]*mi;
            M_73[73] = iden_73[73]*mi;
            M_74[74] = iden_74[74]*mi;
            M_75[75] = iden_75[75]*mi;
            M_76[76] = iden_76[76]*mi;
            M_77[77] = iden_77[77]*mi;
            M_78[78] = iden_78[78]*mi;
            M_79[79] = iden_79[79]*mi;
            M_80[80] = iden_80[80]*mi;
            M_81[81] = iden_81[81]*mi;
            M_82[82] = iden_82[82]*mi;
            M_83[83] = iden_83[83]*mi;
            M_84[84] = iden_84[84]*mi;
            M_85[85] = iden_85[85]*mi;
            M_86[86] = iden_86[86]*mi;
            M_87[87] = iden_87[87]*mi;
            M_88[88] = iden_88[88]*mi;
            M_89[89] = iden_89[89]*mi;
            M_90[90] = iden_90[90]*mi;
            M_91[91] = iden_91[91]*mi;
            M_92[92] = iden_92[92]*mi;
            M_93[93] = iden_93[93]*mi;
            M_94[94] = iden_94[94]*mi;
            M_95[95] = iden_95[95]*mi;
            M_96[96] = iden_96[96]*mi;
            
            while(i<=96){
                soma_0[i] = H_0[i]+ M_0[i];
                soma_1[i] = H_1[i]+ M_1[i];
                soma_2[i] = H_2[i]+ M_2[i];
                soma_3[i] = H_3[i]+ M_3[i];
                soma_4[i] = H_4[i]+ M_4[i];
                soma_5[i] = H_5[i]+ M_5[i];
                soma_6[i] = H_6[i]+ M_6[i];
                soma_7[i] = H_7[i]+ M_7[i];
                soma_8[i] = H_8[i]+ M_8[i];
                soma_9[i] = H_9[i]+ M_9[i];
                soma_10[i] = H_10[i]+ M_10[i];
                soma_11[i] = H_11[i]+ M_11[i];
                soma_12[i] = H_12[i]+ M_12[i];
                soma_13[i] = H_13[i]+ M_13[i];
                soma_14[i] = H_14[i]+ M_14[i];
                soma_15[i] = H_15[i]+ M_15[i];
                soma_16[i] = H_16[i]+ M_16[i];
                soma_17[i] = H_17[i]+ M_17[i];
                soma_18[i] = H_18[i]+ M_18[i];
                soma_19[i] = H_19[i]+ M_19[i];
                soma_20[i] = H_20[i]+ M_20[i];
                soma_21[i] = H_21[i]+ M_21[i];
                soma_22[i] = H_22[i]+ M_22[i];
                soma_23[i] = H_23[i]+ M_23[i];
                soma_24[i] = H_24[i]+ M_24[i];
                soma_25[i] = H_25[i]+ M_25[i];
                soma_26[i] = H_26[i]+ M_26[i];
                soma_27[i] = H_27[i]+ M_27[i];
                soma_28[i] = H_28[i]+ M_28[i];
                soma_29[i] = H_29[i]+ M_29[i];
                soma_30[i] = H_30[i]+ M_30[i];
                soma_31[i] = H_31[i]+ M_31[i];
                soma_32[i] = H_32[i]+ M_32[i];
                soma_33[i] = H_33[i]+ M_33[i];
                soma_34[i] = H_34[i]+ M_34[i];
                soma_35[i] = H_35[i]+ M_35[i];
                soma_36[i] = H_36[i]+ M_36[i];
                soma_37[i] = H_37[i]+ M_37[i];
                soma_38[i] = H_38[i]+ M_38[i];
                soma_39[i] = H_39[i]+ M_39[i];
                soma_40[i] = H_40[i]+ M_40[i];
                soma_41[i] = H_41[i]+ M_41[i];
                soma_42[i] = H_42[i]+ M_42[i];
                soma_43[i] = H_43[i]+ M_43[i];
                soma_44[i] = H_44[i]+ M_44[i];
                soma_45[i] = H_45[i]+ M_45[i];
                soma_46[i] = H_46[i]+ M_46[i];
                soma_47[i] = H_47[i]+ M_47[i];
                soma_48[i] = H_48[i]+ M_48[i];
                soma_49[i] = H_49[i]+ M_49[i];
                soma_50[i] = H_50[i]+ M_50[i];
                soma_51[i] = H_51[i]+ M_51[i];
                soma_52[i] = H_52[i]+ M_52[i];
                soma_53[i] = H_53[i]+ M_53[i];
                soma_54[i] = H_54[i]+ M_54[i];
                soma_55[i] = H_55[i]+ M_55[i];
                soma_56[i] = H_56[i]+ M_56[i];
                soma_57[i] = H_57[i]+ M_57[i];
                soma_58[i] = H_58[i]+ M_58[i];
                soma_59[i] = H_59[i]+ M_59[i];
                soma_60[i] = H_60[i]+ M_60[i];
                soma_61[i] = H_61[i]+ M_61[i];
                soma_62[i] = H_62[i]+ M_62[i];
                soma_63[i] = H_63[i]+ M_63[i];
                soma_64[i] = H_64[i]+ M_64[i];
                soma_65[i] = H_65[i]+ M_65[i];
                soma_66[i] = H_66[i]+ M_66[i];
                soma_67[i] = H_67[i]+ M_67[i];
                soma_68[i] = H_68[i]+ M_68[i];
                soma_69[i] = H_69[i]+ M_69[i];
                soma_70[i] = H_70[i]+ M_70[i];
                soma_71[i] = H_71[i]+ M_71[i];
                soma_72[i] = H_72[i]+ M_72[i];
                soma_73[i] = H_73[i]+ M_73[i];
                soma_74[i] = H_74[i]+ M_74[i];
                soma_75[i] = H_75[i]+ M_75[i];
                soma_76[i] = H_76[i]+ M_76[i];
                soma_77[i] = H_77[i]+ M_77[i];
                soma_78[i] = H_78[i]+ M_78[i];
                soma_79[i] = H_79[i]+ M_79[i];
                soma_80[i] = H_80[i]+ M_80[i];
                soma_81[i] = H_81[i]+ M_81[i];
                soma_82[i] = H_82[i]+ M_82[i];
                soma_83[i] = H_83[i]+ M_83[i];
                soma_84[i] = H_84[i]+ M_84[i];
                soma_85[i] = H_85[i]+ M_85[i];
                soma_86[i] = H_86[i]+ M_86[i];
                soma_87[i] = H_87[i]+ M_87[i];
                soma_88[i] = H_88[i]+ M_88[i];
                soma_89[i] = H_89[i]+ M_89[i];
                soma_90[i] = H_90[i]+ M_90[i];
                soma_91[i] = H_91[i]+ M_91[i];
                soma_92[i] = H_92[i]+ M_92[i];
                soma_93[i] = H_93[i]+ M_93[i];
                soma_94[i] = H_94[i]+ M_94[i];
                soma_95[i] = H_95[i]+ M_95[i];
                soma_96[i] = H_96[i]+ M_96[i];
                i++;
            }
            
            i = 0;
            while(i<=96){//PARTE DO LUCCA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
               
            }
            //variavelauxiliar = g'*inv(soma);
            //W = w - variavelauxiliar
          
            //atualizando pesos
            i = 0;
            while(i<=10){
                W1_0[i] = W[i];
                i++;
            }
            while(i<=21){
                W1_1[i] = W[i];
                i++;
            }
            
            while(i<=32){
                W1_2[i] = W[i];
                i++;
            }
            
            while(i<=43){
                W1_3[i] = W[i];
                i++;
            }
            
            while(i<=54){
                W1_4[i] = W[i];
                i++;
            }
            
            while(i<=65){
                W1_5[i] = W[i];
                i++;
            }
            
            while(i<=76){
                W1_6[i] = W[i];
                i++;
            }
            
            while(i<=87){
                W1_7[i] = W[i];
                i++;
            }
            o = i;
            i = 0;
            while(i<=8){
                W2[i] = W[o] 
                i++;
                o++;
            }
            
            //RECOMPUT4NDO O ERRO 
           // Xb[0] = 1; parece desnecessario pois Xb n foi modificado até aki
            
           intermediario_0 = 0;
           intermediario_1 = 0;
           intermediario_2 = 0;
           intermediario_3 = 0;
           intermediario_4 = 0;
           intermediario_5 = 0;
           intermediario_6 = 0;
           intermediario_7 = 0;
           
           while(i<=7){
                
                intermediario_0 += W1_0[i]*Xb[i];
                intermediario_1 += W1_1[i]*Xb[i];
                intermediario_2 += W1_2[i]*Xb[i];
                intermediario_3 += W1_3[i]*Xb[i];
                intermediario_4 += W1_4[i]*Xb[i];
                intermediario_4 += W1_5[i]*Xb[i];
                intermediario_6 += W1_6[i]*Xb[i];
                intermediario_7 += W1_7[i]*Xb[i];
                i++
            }
            
            
            
           ponderacao1[0] = intermediario_0; 
           ponderacao1[1] = intermediario_1; 
           ponderacao1[2] = intermediario_2; 
           ponderacao1[3] = intermediario_3;
           ponderacao1[4] = intermediario_4; 
           ponderacao1[5] = intermediario_5; 
           ponderacao1[6] = intermediario_6; 
           ponderacao1[7] = intermediario_7;
           ponderacao2 = 0;
          
           i = 0;
           
           while(i<=7){
               saida1[i] = tangh(ponderacao[i]);// MARI AKI!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
               i++;
           }
           
           
           Yb[0] = 1;
           
           i = 1;
           
           while (i <=8){
               Yb[i] = saida1[i];
               i++;
           }
           
           i = 0;
           
           
           while(i<=9){
               ponderacao2+=W2[i]*Yb[i];
               i++;
           } 
           
           
           Eat(ep) = mse(T - ponderacao2);
           
           //damper do if e else enorme
           if (Eat(ep) <= Ean(ep)){
               
               if mi/beta < 0.0000001 {
                   mi = 0.0000001; //o damper não pode ser menor que 1e-7 SOH FAZER IF ELSE AKI
                }                
                
                else {
                    mi = mi/beta;
                }
           Yi(L) = saida2;
           }
            
            
            else {
                
                while Eat(ep) > Ean(ep){
                    //Parâmetro de silenciamento (damper) aumentando
                    if mi*beta > (10000000){
                        mi = 10000000; 
                    }
                    else{
                        mi = mi*beta;
                    }
                 
                    M_0[0] = iden_0[0]*mi;
                    M_1[1] = iden_1[1]*mi;
                    M_2[2] = iden_2[2]*mi;
                    M_3[3] = iden_3[3]*mi;
                    M_4[4] = iden_4[4]*mi;
                    M_5[5] = iden_5[5]*mi;
                    M_6[6] = iden_6[6]*mi;
                    M_7[7] = iden_7[7]*mi;
                    M_8[8] = iden_8[8]*mi;
                    M_9[9] = iden_9[9]*mi;
                    M_10[10] = iden_10[10]*mi;
                    M_11[11] = iden_11[11]*mi;
                    M_12[12] = iden_12[12]*mi;
                    M_13[13] = iden_13[13]*mi;
                    M_14[14] = iden_14[14]*mi;
                    M_15[15] = iden_15[15]*mi;
                    M_16[16] = iden_16[16]*mi;
                    M_17[17] = iden_17[17]*mi;
                    M_18[18] = iden_18[18]*mi;
                    M_19[19] = iden_19[19]*mi;
                    M_20[20] = iden_20[20]*mi;
                    M_21[21] = iden_21[21]*mi;
                    M_22[22] = iden_22[22]*mi;
                    M_23[23] = iden_23[23]*mi;
                    M_24[24] = iden_24[24]*mi;
                    M_25[25] = iden_25[25]*mi;
                    M_26[26] = iden_26[26]*mi;
                    M_27[27] = iden_27[27]*mi;
                    M_28[28] = iden_28[28]*mi;
                    M_29[29] = iden_29[29]*mi;
                    M_30[30] = iden_30[30]*mi;
                    M_31[31] = iden_31[31]*mi;
                    M_32[32] = iden_32[32]*mi;
                    M_33[33] = iden_33[33]*mi;
                    M_34[34] = iden_34[34]*mi;
                    M_35[35] = iden_35[35]*mi;
                    M_36[36] = iden_36[36]*mi;
                    M_37[37] = iden_37[37]*mi;
                    M_38[38] = iden_38[38]*mi;
                    M_39[39] = iden_39[39]*mi;
                    M_40[40] = iden_40[40]*mi;
                    M_41[41] = iden_41[41]*mi;
                    M_42[42] = iden_42[42]*mi;
                    M_43[43] = iden_43[43]*mi;
                    M_44[44] = iden_44[44]*mi;
                    M_45[45] = iden_45[45]*mi;
                    M_46[46] = iden_46[46]*mi;
                    M_47[47] = iden_47[47]*mi;
                    M_48[48] = iden_48[48]*mi;
                    M_49[49] = iden_49[49]*mi;
                    M_50[50] = iden_50[50]*mi;
                    M_51[51] = iden_51[51]*mi;
                    M_52[52] = iden_52[52]*mi;
                    M_53[53] = iden_53[53]*mi;
                    M_54[54] = iden_54[54]*mi;
                    M_55[55] = iden_55[55]*mi;
                    M_56[56] = iden_56[56]*mi;
                    M_57[57] = iden_57[57]*mi;
                    M_58[58] = iden_58[58]*mi;
                    M_59[59] = iden_59[59]*mi;
                    M_60[60] = iden_60[60]*mi;
                    M_61[61] = iden_61[61]*mi;
                    M_62[62] = iden_62[62]*mi;
                    M_63[63] = iden_63[63]*mi;
                    M_64[64] = iden_64[64]*mi;
                    M_65[65] = iden_65[65]*mi;
                    M_66[66] = iden_66[66]*mi;
                    M_67[67] = iden_67[67]*mi;
                    M_68[68] = iden_68[68]*mi;
                    M_69[69] = iden_69[69]*mi;
                    M_70[70] = iden_70[70]*mi;
                    M_71[71] = iden_71[71]*mi;
                    M_72[72] = iden_72[72]*mi;
                    M_73[73] = iden_73[73]*mi;
                    M_74[74] = iden_74[74]*mi;
                    M_75[75] = iden_75[75]*mi;
                    M_76[76] = iden_76[76]*mi;
                    M_77[77] = iden_77[77]*mi;
                    M_78[78] = iden_78[78]*mi;
                    M_79[79] = iden_79[79]*mi;
                    M_80[80] = iden_80[80]*mi;
                    M_81[81] = iden_81[81]*mi;
                    M_82[82] = iden_82[82]*mi;
                    M_83[83] = iden_83[83]*mi;
                    M_84[84] = iden_84[84]*mi;
                    M_85[85] = iden_85[85]*mi;
                    M_86[86] = iden_86[86]*mi;
                    M_87[87] = iden_87[87]*mi;
                    M_88[88] = iden_88[88]*mi;
                    M_89[89] = iden_89[89]*mi;
                    M_90[90] = iden_90[90]*mi;
                    M_91[91] = iden_91[91]*mi;
                    M_92[92] = iden_92[92]*mi;
                    M_93[93] = iden_93[93]*mi;
                    M_94[94] = iden_94[94]*mi;
                    M_95[95] = iden_95[95]*mi;
                    M_96[96] = iden_96[96]*mi;    
                    
                    //Recomputando os pesos com o novo damper
                    
                    while(i<=96){
                        soma_0[i] = H_0[i]+ M_0[i];
                        soma_1[i] = H_1[i]+ M_1[i];
                        soma_2[i] = H_2[i]+ M_2[i];
                        soma_3[i] = H_3[i]+ M_3[i];
                        soma_4[i] = H_4[i]+ M_4[i];
                        soma_5[i] = H_5[i]+ M_5[i];
                        soma_6[i] = H_6[i]+ M_6[i];
                        soma_7[i] = H_7[i]+ M_7[i];
                        soma_8[i] = H_8[i]+ M_8[i];
                        soma_9[i] = H_9[i]+ M_9[i];
                        soma_10[i] = H_10[i]+ M_10[i];
                        soma_11[i] = H_11[i]+ M_11[i];
                        soma_12[i] = H_12[i]+ M_12[i];
                        soma_13[i] = H_13[i]+ M_13[i];
                        soma_14[i] = H_14[i]+ M_14[i];
                        soma_15[i] = H_15[i]+ M_15[i];
                        soma_16[i] = H_16[i]+ M_16[i];
                        soma_17[i] = H_17[i]+ M_17[i];
                        soma_18[i] = H_18[i]+ M_18[i];
                        soma_19[i] = H_19[i]+ M_19[i];
                        soma_20[i] = H_20[i]+ M_20[i];
                        soma_21[i] = H_21[i]+ M_21[i];
                        soma_22[i] = H_22[i]+ M_22[i];
                        soma_23[i] = H_23[i]+ M_23[i];
                        soma_24[i] = H_24[i]+ M_24[i];
                        soma_25[i] = H_25[i]+ M_25[i];
                        soma_26[i] = H_26[i]+ M_26[i];
                        soma_27[i] = H_27[i]+ M_27[i];
                        soma_28[i] = H_28[i]+ M_28[i];
                        soma_29[i] = H_29[i]+ M_29[i];
                        soma_30[i] = H_30[i]+ M_30[i];
                        soma_31[i] = H_31[i]+ M_31[i];
                        soma_32[i] = H_32[i]+ M_32[i];
                        soma_33[i] = H_33[i]+ M_33[i];
                        soma_34[i] = H_34[i]+ M_34[i];
                        soma_35[i] = H_35[i]+ M_35[i];
                        soma_36[i] = H_36[i]+ M_36[i];
                        soma_37[i] = H_37[i]+ M_37[i];
                        soma_38[i] = H_38[i]+ M_38[i];
                        soma_39[i] = H_39[i]+ M_39[i];
                        soma_40[i] = H_40[i]+ M_40[i];
                        soma_41[i] = H_41[i]+ M_41[i];
                        soma_42[i] = H_42[i]+ M_42[i];
                        soma_43[i] = H_43[i]+ M_43[i];
                        soma_44[i] = H_44[i]+ M_44[i];
                        soma_45[i] = H_45[i]+ M_45[i];
                        soma_46[i] = H_46[i]+ M_46[i];
                        soma_47[i] = H_47[i]+ M_47[i];
                        soma_48[i] = H_48[i]+ M_48[i];
                        soma_49[i] = H_49[i]+ M_49[i];
                        soma_50[i] = H_50[i]+ M_50[i];
                        soma_51[i] = H_51[i]+ M_51[i];
                        soma_52[i] = H_52[i]+ M_52[i];
                        soma_53[i] = H_53[i]+ M_53[i];
                        soma_54[i] = H_54[i]+ M_54[i];
                        soma_55[i] = H_55[i]+ M_55[i];
                        soma_56[i] = H_56[i]+ M_56[i];
                        soma_57[i] = H_57[i]+ M_57[i];
                        soma_58[i] = H_58[i]+ M_58[i];
                        soma_59[i] = H_59[i]+ M_59[i];
                        soma_60[i] = H_60[i]+ M_60[i];
                        soma_61[i] = H_61[i]+ M_61[i];
                        soma_62[i] = H_62[i]+ M_62[i];
                        soma_63[i] = H_63[i]+ M_63[i];
                        soma_64[i] = H_64[i]+ M_64[i];
                        soma_65[i] = H_65[i]+ M_65[i];
                        soma_66[i] = H_66[i]+ M_66[i];
                        soma_67[i] = H_67[i]+ M_67[i];
                        soma_68[i] = H_68[i]+ M_68[i];
                        soma_69[i] = H_69[i]+ M_69[i];
                        soma_70[i] = H_70[i]+ M_70[i];
                        soma_71[i] = H_71[i]+ M_71[i];
                        soma_72[i] = H_72[i]+ M_72[i];
                        soma_73[i] = H_73[i]+ M_73[i];
                        soma_74[i] = H_74[i]+ M_74[i];
                        soma_75[i] = H_75[i]+ M_75[i];
                        soma_76[i] = H_76[i]+ M_76[i];
                        soma_77[i] = H_77[i]+ M_77[i];
                        soma_78[i] = H_78[i]+ M_78[i];
                        soma_79[i] = H_79[i]+ M_79[i];
                        soma_80[i] = H_80[i]+ M_80[i];
                        soma_81[i] = H_81[i]+ M_81[i];
                        soma_82[i] = H_82[i]+ M_82[i];
                        soma_83[i] = H_83[i]+ M_83[i];
                        soma_84[i] = H_84[i]+ M_84[i];
                        soma_85[i] = H_85[i]+ M_85[i];
                        soma_86[i] = H_86[i]+ M_86[i];
                        soma_87[i] = H_87[i]+ M_87[i];
                        soma_88[i] = H_88[i]+ M_88[i];
                        soma_89[i] = H_89[i]+ M_89[i];
                        soma_90[i] = H_90[i]+ M_90[i];
                        soma_91[i] = H_91[i]+ M_91[i];
                        soma_92[i] = H_92[i]+ M_92[i];
                        soma_93[i] = H_93[i]+ M_93[i];
                        soma_94[i] = H_94[i]+ M_94[i];
                        soma_95[i] = H_95[i]+ M_95[i];
                        soma_96[i] = H_96[i]+ M_96[i];
                        i++;
                    }
            
                    i = 0;
                    while(i<=96){//PARTE DO LUCCA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                       
                    }
                    //variavelauxiliar = g'*inv(soma);
                    //W = w - variavelauxiliar
                    
                    
                    //Reposicionando os pesos com o novo damper
                    i = 0;
                    while(i<=10){
                        W1_0[i] = W[i];
                        i++;
                    }
                    while(i<=21){
                        W1_1[i] = W[i];
                        i++;
                    }
                    
                    while(i<=32){
                        W1_2[i] = W[i];
                        i++;
                    }
                    
                    while(i<=43){
                        W1_3[i] = W[i];
                        i++;
                    }
                    
                    while(i<=54){
                        W1_4[i] = W[i];
                        i++;
                    }
                    
                    while(i<=65){
                        W1_5[i] = W[i];
                        i++;
                    }
                    
                    while(i<=76){
                        W1_6[i] = W[i];
                        i++;
                    }
                    
                    while(i<=87){
                        W1_7[i] = W[i];
                        i++;
                    }
                    o = i;
                    i = 0;
                    while(i<=8){
                        W2[i] = W[o] 
                        i++;
                        o++;
                    }
                    
                    // Recomputando o erro com o novo damper
                    
                    intermediario_0 = 0;
                    intermediario_1 = 0;
                    intermediario_2 = 0;
                    intermediario_3 = 0;
                    intermediario_4 = 0;
                    intermediario_5 = 0;
                    intermediario_6 = 0;
                    intermediario_7 = 0;
                    
                    while(i<=7){
                         
                         intermediario_0 += W1_0[i]*Xb[i];
                         intermediario_1 += W1_1[i]*Xb[i];
                         intermediario_2 += W1_2[i]*Xb[i];
                         intermediario_3 += W1_3[i]*Xb[i];
                         intermediario_4 += W1_4[i]*Xb[i];
                         intermediario_4 += W1_5[i]*Xb[i];
                         intermediario_6 += W1_6[i]*Xb[i];
                         intermediario_7 += W1_7[i]*Xb[i];
                         i++
                     }
                     
                     
                     
                    ponderacao1[0] = intermediario_0; 
                    ponderacao1[1] = intermediario_1; 
                    ponderacao1[2] = intermediario_2; 
                    ponderacao1[3] = intermediario_3;
                    ponderacao1[4] = intermediario_4; 
                    ponderacao1[5] = intermediario_5; 
                    ponderacao1[6] = intermediario_6; 
                    ponderacao1[7] = intermediario_7;
                    ponderacao2 = 0;
                    
                    i = 0;
                    
                    while(i<=7){
                        saida1[i] = tangh(ponderacao[i]);// MARI AKI!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                        i++;
                    }
                    
                    
                    Yb[0] = 1;
                    
                    i = 1;
                    
                    while (i <=8){
                        Yb[i] = saida1[i];
                        i++;
                    }
                    
                    i = 0;
                    
                    
                    while(i<=9){
                        ponderacao2+=W2[i]*Yb[i];
                        i++;
                    } 
           
          
                    
                    // Atualizando o erro a ser comparado no laço com o novo damper
                   
                    Eat(ep) = mse(T-saida2);
                }
                //o damper é diminuído novamente quando o laço é terminado
                if (mi/beta < 1e-7){
                    mi = 0.0000001; //o damper não pode ser menor que 1e-7 SOH FAZER IF ELSE AKI
                }  
            }
            
            mu(ep) = mi;
            Erro(:,ep) = T-Yi(L);
            
            L++;
        }
        ep++;    
    }
    
}