# -*- coding: utf-8 -*-
"""
Created on Wed May 12 15:04:18 2021

@author: ferre
"""

#import random


def main():
 #   f0 = open("declara_w.txt", "w+")
 #   for i in range(48):
 #       f0.write("print(\"x_" + str(i) + " = \", x_"+ str(i) + ")"'\n')
 #   f0.close()
    
    mat = open("H1calc.txt", "w+")
    mat.write("i = 0;" '\n')
    mat.write("while(i<=96){" '\n')
    for a in range(97):
        mat.write("    H_" + str(a) + " = J[i]*J[" + str(a) + "]/N;" '\n' )
    mat.write("    i++;" '\n')
    mat.write("}")
    mat.close()
    
    
    
    py = open("iden.txt", "w+")
    for i in range(97):
        py.write("float iden_" + str(i) + "[97];"  '\n')
    py.close()
    
    py = open("soma.txt", "w+")
    for i in range(97):
        py.write("float soma_" + str(i) +"[97];"  '\n')
    py.close()
    
    
    py = open("somaop.txt", "w+")
    py.write("while(i<=96){" '\n')
    for i in range(97):
        py.write("    soma_" + str(i) + "[i] = H_" + str(i) + "[i]+ M_" + str(i) + "[i];"  '\n')
    py.write("    i++;" '\n')
    py.write("}")
    py.close()
    
    py = open("inv.txt", "w+")
    for i in range(97):
        py.write("inve_" + str(i) + "=inv(soma_" + str(i) + ");" '\n')
    py.close()
    
    py = open("Mmult.txt", "w+")
    for i in range(97):
        py.write("M_" + str(i) + "[" + str(i) + "] = iden_" + str(i) + "[" + str(i) + "]*mi;"  '\n')
    py.close()
    
    
    
    
    #teste
    dab = open("W_1.txt", "w+")
    arquivo = open("W1.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_0"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_2.txt", "w+")
    arquivo = open("W2.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_1"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_3.txt", "w+")
    arquivo = open("W3.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_2" + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_4.txt", "w+")
    arquivo = open("W4.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_4"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()
    
    dab = open("W_5.txt", "w+")
    arquivo = open("W5.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_5"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_6.txt", "w+")
    arquivo = open("W6.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_6"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_7.txt", "w+")
    arquivo = open("W7.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_7"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_8.txt", "w+")
    arquivo = open("W8.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_8"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()
    
    
    #fim do teste
    
    #teste
    dab = open("W_1a.txt", "w+")
    
    for i in range(97):
        dab.write("W1_0"  + "[]"'\n' )
    dab.close()

    dab = open("W_2a.txt", "w+")
    arquivo = open("W2.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_1"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_3a.txt", "w+")
    arquivo = open("W3.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_2" + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_4a.txt", "w+")
    arquivo = open("W4.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_4"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()
    
    dab = open("W_5a.txt", "w+")
    arquivo = open("W5.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_5"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_6a.txt", "w+")
    arquivo = open("W6.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_6"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_7a.txt", "w+")
    arquivo = open("W7.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_7"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()

    dab = open("W_8a.txt", "w+")
    arquivo = open("W8.txt", "r")
    cont = 0
    for i in arquivo:
            dab.write("W1_8"  + "[" + str(cont) + "] = " + str(i.split()) + ";" '\n' )
            cont=1+cont
    arquivo.close()
    dab.close()
    
    
    
    

   # f1 = open("vetor_x.txt", "w+")
   # for i in range(48):
   #     f1.write("x[" + str(i) + "] = " + str(random.randint(0, 100)) + ";" '\n')
   # f1.close()

   # f2 = open("matriz_w.txt", "w+")
   # for i in range(48):
    #    for j in range(48):
   #         f2.write("h" + str(i) + "[" + str(j) + "] = " + str(random.randint(0, 100)) + ";" '\n')
   # f2.close()

#    f3 = open("declara_y.txt", "w+")
#    for i in range(48):
#        f3.write("mi" + str(i) + "[i] = mi*w" + str(i) + "[i];"'\n')
#    f3.close()

#    f4 = open("gera_loop.txt", "w+")
#    for i in range(48):
#        f4.write("miwd[" + str(i) + "] = miwd[" + str(i) + "] + miw" + str(i) + "[i]*d[i];" '\n')
#    f4.close()

 #   f5 = open("vetor_d.txt", "w+")
  #  for i in range(48):
  #      f5.write("d[" + str(i) + "] = " + str(random.randint(0, 100)) + ";" '\n')
  #  f5.close()

#    f6 = open("vetor_x_novo.txt", "w+")
#    for i in range(48):
#        f6.write("aux[" + str(i) + "] = aux[" + str(i) + "] + x[i]*h" + str(i) + "[i];" '\n')
#    f6.close()#

#    f7 = open("matriz_miw.txt", "w+")
#    for i in range(48):
#        f7.write("LOAD mainaux_" + str(i) + "'\n'")
#        f7.write("PSET mainx_" + str(i))
#    f7.close()

#    f8 = open("que.txt", "w+")
#    for i in range(48):
#        f8.write("LOAD mainaux_" + str(i) + '\n' + "PSET mainx_" + str(i) + '\n')
#    f8.close()

#    f9 = open("multicore.txt", "w+")
#    for i in range(146):
#        f9.write(str(i) + ": begin rst"+ str(i) +" <= 0; if (cnt <= 32'd210) cnt=cnt+32'd1; else begin q <= q+32'd1; cnt=0; end	end"+ '\n')
#    f9.close()


if __name__ == "__main__":
    main()