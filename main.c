#include <stdio.h>
#include <stdlib.h>
#include "somatorio.h"
#include "logica.h"
#include "matrizes.h"
#include "menu1.h"
#include "analise.h"
#include "cientifica.h"
#include "converbases.h"
#include "sair.h"

void logo()
 {
   printf("\n                       :::::::::::::::::::::::::::::::::::::");
   printf("\n                       ::                                 ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @      CALCULADORA    @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @        ENGINE       @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::                                 ::");
   printf("\n                       :::::::::::::::::::::::::::::::::::::\n");
   }

int main() {
  logo();
  int ch;
        //system("@cls||clear");
        printf("\n\n\n                     Escolha uma das opcoes abaixo:                   \n");
        printf("                                  \n");
        printf("                        1. Somatorio\n");
        printf("                        2. Logica Proposicional\n");
        printf("                        3. Matrizes\n");
        printf("                        4. Analise Combinatoria\n");
        printf("                        5. Calculadora Cientifica\n");
        printf("                        6. Conversor de Bases Numericas\n");
        printf("                        7. Sair\n");
        printf("Escolha: ");
        while(!scanf("%d",&ch))
        {
        while(getchar()!='\n')
        getchar();
        system("@cls||clear");
        printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
        menu1();
    }
        switch(ch)
        {
        case 1:
        system("@cls||clear");
        somatorio();
       system("@cls||clear");
        break;
        case 2:
       system("@cls||clear");
        logica();
        break;
        case 3:
       system("@cls||clear");
        matrizes();
        break;
        case 4:
       system("@cls||clear");
        analise();
        break;
        case 5:
       system("@cls||clear");
        cientifica();
        break;
       system("@cls||clear");
        case 6:
       system("@cls||clear");
       getchar();
        bases();
        break;
        case 7:
       system("@cls||clear");
        sair();
        break;
        default:
        if (ch !=7){
          system("@cls||clear");
          printf("Digite uma opcao valida\n");
          menu1();
        }
       }



  return 0;
}
