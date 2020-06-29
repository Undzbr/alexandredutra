#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cientifica(){

  int choice, i, a, b;
  float x, y, Resultado;
  char op = ' ';
  //system("@cls||clear");
  do {
    //system("@cls||clear");
    printf("                               CALCULADORA CIENTIFICA\n");
    printf("\n\n\n        Escolha uma das opcoes abaixo ou 0 para retornar ao menu anterior.                   \n");
    printf("\n\n\n                                     \n");
    printf("              1. Adicao                              13. X!\n");
    printf("              2. Subtracao                           14. %%\n");
    printf("              3. Multiplicacao                       15. log10(x) \n");
    printf("              4. Divisao                             16. Modulus\n");
    printf("              5. Raiz Quadrada                       17. Seno(X)\n");
    printf("              6.  X ^ Y                              18. Coseno(X)\n");
    printf("              7. X ^ 2                               19. Tangente(X)\n");
    printf("              8.  X ^ 3                              20. Cosecante(X)\n");
    printf("              9. 1 / X                               21. Cotangente(X)\n");
    printf("              10. X ^ (1 / Y                         22. Secante(X)\n");
    printf("              11. X ^ (1 / 3\n");
    printf("              12.10 ^ X\n");
  printf("Escolha ");
  while(!scanf("%d",&choice))
  {
  while(getchar()!='\n')
  getchar();
  system("@cls||clear");
  printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
  menu1();
}
  if(choice == 0){
    system("@cls||clear");
    menu1();
  }
  switch(choice) {
    case 1:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = x + y;
        printf("\nResultado: %f", Resultado);
        break;
    case 2:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = x - y;
        printf("\nResultado: %f", Resultado);
        break;
  case 3:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = x * y;
        printf("\nResultado: %f", Resultado);
        break;
  case 4:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = x / y;
        printf("\nResultado: %f", Resultado);
        break;
  case 5:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = sqrt(x);
        printf("\nResultado: %f", Resultado);
        break;
  case 6:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = pow(x, y);
        printf("\nResultado: %f", Resultado);
        break;
  case 7:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = pow(x, 2);
        printf("\nResultado: %f", Resultado);
        break;
  case 8:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = pow(x, 3);
        printf("\nResultado: %f", Resultado);
        break;
  case 9:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = pow(x, -1);
        printf("\nResultado: %f", Resultado);
        break;
  case 10:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = pow(x, (1/y));
        printf("\nResultado: %f", Resultado);
        break;
  case 11:
        printf("Valor X: ");
        scanf("%f", &x);
        y = 3;
        Resultado = pow(x, (1/y));
        printf("\nResultado: %f", Resultado);
        break;
  case 12:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = pow(10, x);
        printf("\nResultado: %f", Resultado);
        break;
  case 13:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = 1;
        for(i = 1; i <= x; i++) {
        Resultado = Resultado * i;
        }
        printf("\nResultado: %.f", Resultado);
        break;
  case 14:
        printf("Valor X: ");
        scanf("%f", &x);
        printf("\nValor Y: ");
        scanf("%f", &y);
        Resultado = (x * y) / 100;
        printf("\nResultado: %.2f", Resultado);
        break;
  case 15:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = log10(x);
        printf("\nResultado: %.2f", Resultado);
        break;
  case 16:
        printf("Valor X: ");
        scanf("%d", &a);
        printf("\nValor Y: ");
        scanf("%d", &b);
        Resultado = a % b;
        printf("\nResultado: %f", Resultado);
        break;
  case 17:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = sin(x * 3.14159 / 180);
        printf("\nResultado: %.2f", Resultado);
        break;
  case 18:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = cos(x * 3.14159 / 180);
        printf("\nResultado: %.2f", Resultado);
        break;
  case 19:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = tan(x * 3.14159 / 180);
        printf("\nResultado: %.2f", Resultado);
        break;
  case 20:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = 1 / (sin(x * 3.14159 / 180));
        printf("\nResultado: %.2f", Resultado);
        break;
  case 21:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = 1 / tan(x * 3.14159 / 180);
        printf("\nResultado: %.2f", Resultado);
        break;
  case 22:
        printf("Valor X: ");
        scanf("%f", &x);
        Resultado = 1 / cos(x * 3.14159 / 180);
        printf("\nResultado: %.2f", Resultado);
        break;
  default:
  system("@cls||clear");
  printf("Digite uma opcao valida\n");
  cientifica();
  }
        printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
        scanf("%s",&op);
		system("@cls||clear");
} while(op == 'S' || op == 's');


    menu1();
    //system("clear");


}
