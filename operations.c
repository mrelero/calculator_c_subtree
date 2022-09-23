#include "operations.h"


OPR_iSoma(int iNum1, int iNum2){
   return iNum1 + iNum2;
}



int OPR_iProduto(int iNum1, int iNum2){
   return iNum1 * iNum2;
}

int OPR_iPotencia(int iNum1, int iExp){
   int iAux;
   int iMult;
   iAux = 1;
   for(iMult = 1; iMult <= iExp; iMult++){
      iAux = iNum1 * iAux;
   }
   return iAux;
}

extern long OPR_lFatorial(long lNumber){
   long lAux;
   long lIndex;
   lAux = 1;
   for(lIndex = 1; lIndex <= lNumber; lIndex++){
      lAux = lIndex * lAux;
   }

   return lAux;
}

extern int OPR_iModulo(int iNumber){

   if(iNumber < 0){
      return (iNumber * -1);
   }

   return iNumber;
}

extern int OPR_iIsOdd(int iNumber){

   if(iNumber%2 == 0){
      return 0;
   }

   return 1;
}

extern float OPR_fDiv(float fDenominador, float fDividendo){
   return fDenominador / fDividendo;
}


extern long OPR_l10Exp(int iExp){
   long lAux;
   int iMult;
   lAux = 1;
   for (iMult = 1; iMult <= iExp; iMult++) {
      lAux = 10 * lAux;
   }
   return lAux;
}


extern int OPR_iCube(int iNumber){
   return iNumber * iNumber * iNumber;
}

extern int OPR_i2x(int iNumber){
   
   return 2 * iNumber;
}
