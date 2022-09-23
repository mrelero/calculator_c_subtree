#include "math_operations_h/operations.h"
#include <stdio.h>
#include <string.h>




enum OperationsEnum {
   SOMA,
   PRODUTO,
   EXP,
   FATORIAL,
   MODULO,
   ISODD,
   DIVISAO,
   EXP10,
   CUBE,

   MAX_OPERATIONS

};

int main(void) {
   enum OperationsEnum eSelect;
   int iNumber1;
   int iNumber2;
   int iNumber3;


   while (1)
   {
      printf("Selecione uma Operacao: \n 0 - Somar 3 Numeros \n 1 - Produto \n 2 - Exponencial \n 3 - Fatorial \n 4 - Modulo \n 5 - Par Impar \n 6 - Divisao \n 7 - 10^  \n" 
         " 8 - CUBO \n %d - Sair\n", MAX_OPERATIONS);
      scanf_s("%d", &eSelect);
      switch (eSelect)
      {
      case SOMA:

         printf("Digite Numero 1:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Numero 2:\n");
         scanf_s("%d", &iNumber2);
         printf("Digite Numero 3:\n");
         scanf_s("%d", &iNumber3);
         printf("Soma igual: %d \n", OPR_iSoma(iNumber1, iNumber2, iNumber3));
         break;
      case PRODUTO:

         printf("Digite Numero 1:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Numero 2:\n");
         scanf_s("%d", &iNumber2);
         printf("Produto igual: %d \n", OPR_iProduto(iNumber1, iNumber2));
         break;
      case EXP:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Expoente:\n");
         scanf_s("%d", &iNumber2);
         printf("Exponencial igual: %d \n", OPR_iPotencia(iNumber1, iNumber2));
         break;
      case FATORIAL:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Fatorial igual: %d \n", OPR_lFatorial(iNumber1));
         break;
      case MODULO:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Modulo igual: %d \n", OPR_iModulo(iNumber1));
         break;
      case ISODD:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         if (OPR_iIsOdd(iNumber1) == 0) {
            printf("\nNumero Par \n");
         }
         else {
            printf("\nNumero Impar \n");
         }
         break;
      case DIVISAO:
         printf("Digite Numerador:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Dividendo:\n");
         scanf_s("%d", &iNumber2);
         printf("%d/%d = %f \n", iNumber1, iNumber2, OPR_fDiv((float)iNumber1, (float)iNumber2));
         break;
      case EXP10:
         printf("Digite Exp:\n");
         scanf_s("%d", &iNumber1);
         printf("10^%d = %ld\n", iNumber1, OPR_l10Exp(iNumber1));
         break;
      case CUBE:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("%d^3 = %i\n", iNumber1, OPR_iCube(iNumber1));
         break;
      case MAX_OPERATIONS:
      default:
         return 1;
      }

   }
   return;
}