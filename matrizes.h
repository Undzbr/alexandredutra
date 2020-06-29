#include<stdio.h>
#include<stdlib.h>
#include <math.h>
//MATRIZ//

//FUN��ES MATRIZ//

// SOMA
int matriz_soma(int x, int m, int n) {
    int z[100][100], i = 0, j = 0,k = 0;
    int UI = 0;

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= m; j++) {
            for (k = 1; k <= n; k++) {
              //  system("@cls||clear");
                printf("\nInsira o elemento %d%d da Matriz %d: ", j, k, i);
                scanf("%d", &UI);
                z[j-1][k-1] = z[j-1][k-1] + UI;
            }
        }
    }
	//system("@cls||clear");
	printf("\nO resultado da soma �:\n");
    for (i = 0; i < m; i++) {
                printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d%d: %d \t", i + 1, j + 1, z[i][j]);
        }
    }
    printf("\n\n\n\n");
}

// SUBTRA��O
int matriz_sub(int x, int m, int n) {
    int z[100][100], i = 0, j = 0, k = 0;
    int UI = 0;

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= m; j++) {
            for (k = 1; k <= n; k++) {
                //system("@cls||clear");
                printf("\nInsira o elemento %d%d da Matriz %d: ", j, k, i);
                scanf("%d", &UI);
                if (i > 1) {
                    z[j-1][k-1] = z[j-1][k-1] - UI;
                } else {
                    z[j-1][k-1] = z[j-1][k-1] + UI;
                }
            }
        }
    }

    for (i = 0; i < m; i++) {
                printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d%d: %d ", i + 1, j + 1, z[i][j]);
        }
    }
}

// PRODUTO
int matriz_prod(int m1, int n1, int m2, int n2) {

    int z[100][100], i, j, k, l;
    int matriz1[100][100], matriz2[100][100];
    int UI = 0;
    int x = 2;

    // FAZER 1 FOR PARA CADA MATRIZ ANTES DE FAZER A CONTA

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= n1; j++) {
            printf("\nInsira o elemento A%d%d da Matriz 1: ", i, j);
            scanf("%d", &UI);
            matriz1[i-1][j-1] = matriz1[i-1][j-1] + UI;
        }
    }

    for (i = 1; i <= m2; i++) {
        for (j = 1; j <= n2; j++) {
            printf("\nInsira o elemento A%d%d da Matriz 2: ", i, j);
            scanf("%d", &UI);
            matriz2[i-1][j-1] = matriz2[i-1][j-1] + UI;
            printf("\n%d", matriz2[i-1][j-1]);
        }
    }

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= n1; j++) {
            for (k = 1; k <= n2; k++) {
                z[i-1][k-1] = z[i-1][k-1] + ((matriz1[i-1][j-1] * matriz2[j-1][k-1]));
            }
        }
    }

    //system("@cls||clear");

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= m1; j++) {
            printf("A%d%d: %d ", i, j, z[i-1][j-1]);
            if (j == m1) {
                printf("\n");
            }
        }
    }

}

// DETERMINANTE
int matriz_det(int x) {
    int z[100][100], i, j, k, det3sum = 0, det3sub = 0, colval[6];

    // primeira ordem (1x1)
    if (x == 1) {
      //  system("@cls||clear");
        printf("\nInsira o valor A11 da Matriz: \n");
        scanf("%d", &z[0][0]);
        printf("\nDeterminante: %d\n", z[0][0]);
    }

    // segunda ordem (2x2)
    if (x == 2) {
        //system("@cls||clear");
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                printf("\nInsira o valor A%d%d da Matriz: ", i+1, j+1);
                scanf("%d", &z[i][j]);
            }
        }

        printf("\nDeterminante: %d\n", ((z[0][0]*z[1][1])-(z[0][1]*z[1][0])));
    }

    //terceira ordem (3x3)
    if (x == 3) {
        //system("@cls||clear");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("\nInsira o valor A%d%d da Matriz: ", i+1, j+1);
                scanf("%d", &z[i][j]);
            }
        }

        for (i = 0; i <= 2; i++) {
            for (j = 3; j <= 5; j++) {
                z[i][j] = z[i][j-3];
            }
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 5; j++) {
                //printf("\nA%d%d = %d", i, j, z[i][j]);
            }
        }

        for (i = 0; i < 1; i++) {
            for (j = 0; j < 1; j++) {
                for (k = 0; k < 3; k++) {
                    det3sum = det3sum + (z[i][k] * z[i+1][k+1] * z[i+2][k+2]);
                    printf("\n%d", det3sum);
                }
            }
        }

printf("\n#####\n");

        for (i = 0; i < 1; i++) {
            for (j = 0; j < 1; j++) {
                for (k = 2; k < 5; k++) {
                    det3sub = det3sub + (z[i][k] * z[i+1][k-1] * z[i+2][k-2]);
                    printf("\n%d", det3sub);
                }
            }
        }

        printf("\nDeterminante: %d", (det3sum -det3sub));
    }
}

//MENU//

int matrizes(){

  char string[2], digitado[20];
	int opcao=0;
	//

	int UI = 0;
    int m = 0,  n = 0, m1 = 0, n1 = 0, m2 = 0, n2 = 0;
    int x = 0, UI2 = 0;
    char op = ' ';
	//
  
  //system("@cls||clear");//system("@cls||clear");
  printf("                                     MATRIZES                     \n");
  printf("\n\n\n                        Escolha uma das opcoes abaixo:                   \n");
  printf("\n\n\n                                     \n");
  printf("                            1. Soma\n");
  printf("                            2. Subtracao\n");
  printf("                            3. Produto\n");
  printf("                            4. Determinante\n");
  printf("                            5. Voltar ao menu anterior\n");
  printf("Escolha: ");
  while(!scanf("%d",&opcao))
  {
  while(getchar()!='\n')
  getchar();
  system("@cls||clear");
  printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
  menu1();
}
	switch(opcao)
	{
	case 1:
      do{
      system("@cls||clear");
      printf("\nNumero de matrizes que serao somadas: ");
  		scanf("%d",&x );
  		printf("\nNumero de linhas das matrizes: ");
  		scanf("%d",&m );
  		printf("\nNumero de colunas das matrizes: ");
  		scanf("%d",&n );
  		matriz_soma(x, m, n);
      printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
      scanf("%s",&op);
      system("@cls||clear");
     } while(op == 'S' || op == 's');
       system("@cls||clear");


     break;
	   case 2:

      do{
       printf("\nNumero de matrizes que serao subtraidas: ");
       scanf("%d",&x );
        printf("\nNumero de linhas das matrizes: ");
        scanf("%d",&m );
        printf("\nNumero de colunas das matrizes: ");
        scanf("%d",&n );
        matriz_sub(x, m, n);
        printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
        scanf("%s",&op);
        system("@cls||clear");
       } while(op == 'S' || op == 's');
         system("@cls||clear");

		break;

	case 3:
    do{
    system("@cls||clear");
		printf("\nNumero de linhas da matriz 1: ");
        scanf("%d", &m1);
        printf("\nNumero de colunas da matriz 1: ");
        scanf("%d", &n1);
        printf("\nNumero de linhas da matriz 2: ");
        scanf("%d", &m2);
        printf("\nNumero de colunas da matriz 2: ");
        scanf("%d", &n2);
        if (n1 == m2) {
            matriz_prod(m1, n1, m2, n2);
        } else {
            system("@cls||clear");
            printf("\nImpossivel fazer a conta.\n");

        }
        printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
        scanf("%s",&op);
        system("@cls||clear");
       } while(op == 'S' || op == 's');
         system("@cls||clear");
    break;

	case 4:

    do{
    system("@cls||clear");
		printf("\nEscolha a ordem da Matriz:");
        printf("\n(1). 1x1");
        printf("\n(2). 2x2");
        printf("\n(3). 3x3\n\n");
        scanf("%d", &UI2);
        matriz_det(UI2);
        printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
        scanf("%s",&op);
        system("@cls||clear");
       } while(op == 'S' || op == 's');
         system("@cls||clear");

		break;
  case 5:
  system("@cls||clear");
  menu1();
  break;
    default:
      system("@cls||clear");
      printf("Digite uma opcao valida\n");
      matrizes();
  }

    menu1();


}
