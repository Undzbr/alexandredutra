#include <math.h>
unsigned long Fatorial(unsigned long n);
int analise(){
  int analise;
do{
//system("@cls||clear");
printf("                            ANALISE COMBINATORIA \n");
printf("\n\n\n                         Escolha uma das opcoes abaixo:                   \n");
printf("\n\n\n                                     \n");
printf("                        1. Permutacao Simples\n");
printf("                        2. Arranjo Simples\n");
printf("                        3. Combinacao Simples\n");
printf("                        4. Voltar ao menu anterior\n");
printf("Escolha: ");
while(!scanf("%d",&analise))
{
while(getchar()!='\n')
getchar();
system("@cls||clear");
printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
menu1();
}
switch (analise) {
  case 1: permutacao();break;
  case 2: arranjo(); break;
  case 3: combinacao();break;
  case 4:
  system("@cls||clear");
  menu1();  break;
  default:
    system("@cls||clear");
    printf("Digite uma opcao valida\n");

  }

}while(analise);

}
//-----------------------------------------------------------//
void combinacao()
{
system("clear");
long n,k,aux;
long A,C,P;
char op = ' ';
  do{
printf("Selecionado Combinacao \n\n");
do{
  system("@cls||clear");
  printf("Entre com o valor de n: ");
  scanf("%li",&n);
  printf("\nEntre com o valor de k: ");
  scanf("%li",&k);
    if(n<k || k<0)
  printf("!!!ERRO!!! Dado incorreto!\nTente novamente!\n ");
}while(n<k || k<0);
  aux = Fatorial(n);
  A = (aux/Fatorial(n-k));
  C = (Fatorial(n))/(Fatorial(k)*(Fatorial(n-k)));
  P = Fatorial(n);
  printf("Combinacao: C(%li,%li) = %li\n\n",n,k,C);
  printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
  scanf("%s",&op);
  system("@cls||clear");
} while(op == 'S' || op == 's');
    menu1();
  }

unsigned long Fatorial(unsigned long n)
{
if(n==0 || n==1)
return 1;
return n*Fatorial(n-1);
//system("clear");
}
//--------------------------------------------------------------------------//
void permutacao()
{
system("@cls||clear");
long n,k,aux;
long A,C,P;
char op = ' ';
do{
  system("@cls||clear");
printf("Selecionado Permutacao\n\n");
do{
  system("@cls||clear");
  printf("Entre com o valor de n: ");
  scanf("%li",&n);
  printf("\nEntre com o valor de k: ");
  scanf("%li",&k);
  if(n<k || k<0)
  printf("!!!ERRO!!! Dado incorreto!\nTente novamente!\n ");
}while(n<k || k<0);
  aux = Fatorial(n);
  A = (aux/Fatorial(n-k));
  C = (Fatorial(n))/(Fatorial(k)*(Fatorial(n-k)));
  P = Fatorial(n);
  printf("Permutacao: P(%li) = %li\n\n",n,P);
  printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
  scanf("%s",&op);
  system("@cls||clear");
  } while(op == 'S' || op == 's');
    menu1();
}
//----------------------------------------------------------------------------//
void arranjo()
{
system("@cls||clear");
long n,k,aux;
long A,C,P;
char op = ' ';

do{
  system("@cls||clear");
printf("Selecionado Arranjo\n\n");
do{
  printf("Entre com o valor de n: ");
  scanf("%li",&n);
  printf("\nEntre com o valor de k: ");
  scanf("%li",&k);
  if(n<k || k<0)
  printf("!!!ERRO!!! Dado incorreto!\nTente novamente!\n ");
}while(n<k || k<0);
  aux = Fatorial(n);
  A = (aux/Fatorial(n-k));
  C = (Fatorial(n))/(Fatorial(k)*(Fatorial(n-k)));
  P = Fatorial(n);
  printf("Arranjo: A(%li,%li)= %li\n\n",n,k,A);
  printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
  scanf("%s",&op);
  system("@cls||clear");
  }while(op == 'S' || op == 's');
  menu1();
}
