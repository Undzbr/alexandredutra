int logica(){
int logica;
//system("@cls||clear");
do{
//system("clear");
//system("clear");
printf("                            LOGICA PROPOSICIONAL\n");
printf("\n\n\n                         Escolha uma das opcoes abaixo:                   \n");
printf("\n\n\n                                     \n");
printf("                        1. ~p\n");
printf("                        2. ~q\n");
printf("                        3. p ∧ q\n");
printf("                        4. p v q\n");
printf("                        5. p v- q\n");
printf("                        6. p→q\n");
printf("                        7. p↔q\n");
printf("                        8. Voltar ao menu anterior\n");
printf("Escolha: ");
while(!scanf("%d",&logica))
{
while(getchar()!='\n')
getchar();
system("@cls||clear");
printf ("Nao aceitamos letras!!! \nDigite um valor numerico: \n");
menu1();
}
  switch(logica){
      case 1: logica1(); break;
      case 2: logica2(); break;
      case 3: logica3(); break;
      case 4: logica4(); break;
      case 5: logica5(); break;
      case 6: logica6(); break;
      case 7: logica7(); break;
      case 8:
         system("@cls||clear");
          menu1();
          break;
      default:

        system("@cls||clear");
        printf("Digite uma opcao valida\n");

     }
     }while(logica);
}



//-----------------------------------------------------------------------------
logica1(){

   system("@cls||clear");
   int pVF;
   int qVF;
   int op = ' ';
do{
  system("@cls||clear");
  printf("Digite 0 - Falso / 1 - Verdadeiro \n");
  scanf("%d", &pVF);
  if(pVF == 1){
  printf("Falso\n");
   }
   else if(pVF == 0)
   {
  printf("Verdadeiro\n");
   }
   else{
  printf("Opção invalida\n");
   }
  printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
  scanf("%s",&op);
  system("@cls||clear");
} while(op == 'S' || op == 's');
menu1();
 }
//-------------------------------------------------------------------------------------//
void logica2()
  {
  system("@cls||clear");
  int pVF;
  int qVF;
  int op = ' ';
do{
  system("@cls||clear");
  printf("Digite 0 - Falso / 1 - Verdadeiro \n");
  scanf("%d", &pVF);
  if(pVF == 1){
  printf("Falso\n");
  }
  else if(pVF == 0)
  {
  printf("Verdadeiro\n");
  }
  else{
  printf("Opção invalida\n");
  }
  printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
  scanf("%s",&op);
  system("@cls||clear");
} while(op == 'S' || op == 's');
  menu1();
  }

//-------------------------------------------------------------------------------//
void logica3()
  {
  system("@cls||clear");
  int pVF;
  int qVF;
  int op = ' ';
do{
  system("@cls||clear");
  printf("Digite 0 - Falso / 1 - Verdadeiro \n");
  scanf("%d", &pVF);
  printf("0 - Falso / 1 - Verdadeiro \n");
  scanf("%d", &qVF);
  if((pVF == 1) && (qVF == 1)){
     printf(" 1 = Verdadeiro\n");
 }
 else {
   printf(" 0 = Falso\n");
 }
   printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
   scanf("%s",&op);
   system("@cls||clear");
 } while(op == 'S' || op == 's');
   menu1();
   }
   //---------------------------------------------------------------------------//

 void logica4()
    {
      system("@cls||clear");
      int pVF;
      int qVF;
      int op= ' ';
     do{
      system("@cls||clear");
      printf("Digite 0 - Falso / 1 - Verdadeiro \n");
      scanf("%d", &pVF);
      printf("0 - Falso / 1 - Verdadeiro \n");
       scanf("%d", &qVF);
if((pVF == 0) && (qVF == 0)){
      printf(" 0 = Falso\n");
 }
 else{
     printf(" 1 = Verdadeiro\n");
 }
     printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
     scanf("%s",&op);
     system("@cls||clear");
   } while(op == 'S' || op == 's');
    menu1();
    }
//------------------------------------------------------------------------------------//
void logica5()
     {
         system("@cls||clear");
       int pVF;
       int qVF;
       int op = ' ';
       do{
        system("@cls||clear");
        printf("Digite 0 - Falso / 1 - Verdadeiro \n");
        scanf("%d", &pVF);
        printf("0 - Falso / 1 - Verdadeiro \n");
         scanf("%d", &qVF);
if(((pVF == 1) && (qVF == 1)) || ((pVF == 0) && (qVF == 0))){
          printf(" 0 = Falso\n");
            }
else
            {
          printf(" 1 = Verdadeiro\n");
            }
          printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
          scanf("%s",&op);
          system("@cls||clear");
        } while(op == 'S' || op == 's');
        menu1();
     }
//-----------------------------------------------------------------------------------//
void logica6()
      {
          system("@cls||clear");
          int pVF;
          int qVF;
          int op = ' ';
        do{
         system("@cls||clear");
         printf("Digite 0 - Falso / 1 - Verdadeiro \n");
         scanf("%d", &pVF);
         printf("0 - Falso / 1 - Verdadeiro \n");
         scanf("%d", &qVF);
if((pVF == 1) && (qVF == 0)){
           printf(" 0 = Falso\n");
       }
  else
       {
       printf(" 1 = Verdadeiro\n");
       }
       printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
       scanf("%s",&op);
       system("@cls||clear");
     } while(op == 'S' || op == 's');
     menu1();
       }
//--------------------------------------------------------------------------------//
void logica7()
       {
           system("@cls||clear");
           int pVF;
           int qVF;
           int op = ' ';
         do{
      system("@cls||clear");
      printf("Digite 0 - Falso / 1 - Verdadeiro \n");
      scanf("%d", &pVF);
      printf("0 - Falso / 1 - Verdadeiro \n");
      scanf("%d", &qVF);
if(((pVF == 1) && (qVF == 1)) || ((pVF == 0) && (qVF == 0))){
            printf(" 1 = Verdadeiro\n");
            }
else
            {
            printf(" 0 =  Falso\n");
            }
            printf("\nNovo calculo? [S] para sim ou qualquer tecla para sair: ");
            scanf("%s",&op);
            system("@cls||clear");
          } while(op == 'S' || op == 's');
            menu1();
 }





//-----------------------------------------------------------------------//
