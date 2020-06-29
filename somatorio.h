#include <math.h>
int somatorio(){

	int opcao=0, k=0, e=0, j=0, m=0, n=0, res=0;
  int soma=0 , op = ' ';


 //system("@cls||clear");
 printf("                                     SOMATORIO                     \n");
 printf("\n\n\n                        Escolha uma das opcoes abaixo:                   \n");
 printf("\n\n\n                                     \n");
 printf("                       1. Somatorio de j = m ate n para regra j\n");
 printf("                       2. Somatorio de j = m ate n para a regra (-j)∧ (j +1)\n");
 printf("                       3. Voltar ao menu anterior\n");
 printf("Escolha: ");
 while(!scanf("%d",&soma))
 {
 while(getchar()!='\n') getchar();
 system("@cls||clear");
 printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
 menu1();
}
  	switch(soma)
	{
	case 1:
  do{
	system("@cls||clear");
	printf("\nDigite o limite n:\n");
  scanf("%d",&n );
  printf("\nDigite o valor de m:\n");
  scanf("%d", &j );
  
	for (k==0;k<=n;k++){
		res=res+(pow(j,k));
	}
 printf("\nO resultado do somatório é: %d\n\n\n\n",res);
 printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
 scanf("%s",&op);
 system("@cls||clear");
} while(op == 'S' || op == 's');
  system("@cls||clear");

  menu1();

	case 2:
  do {
	system("@cls||clear");
	printf("\nDigite o limite n:\n");
  scanf("%d",&n );
  printf("\nDigite o valor da regra (-j)∧ (j +1):\n");
  scanf("%d", &j );
  printf("\nDigite o valor do expoente m:\n");
  scanf("%d",&m );
  for (k==0;k<=n;k++){
  e=pow(m,k);
  res=res+(pow(j,e));
}
  printf("\nO resultado do somatório é: %d\n\n\n\n",res);
 printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
 scanf("%s",&op);
 system("@cls||clear");
} while(op == 'S' || op == 's');

 system("@cls||clear");
 menu1();

	case 3:
      system("@cls||clear");
      menu1();
		break;
default:
if (soma !=3){
	system("@cls||clear");
	printf("Digite uma opcao valida\n");

	somatorio();

		}
}
}
