#include<stdio.h>

 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 int main()
 {
      int iValue = 0;
      BOOL bRet = FALSE;

      printf("\n Entar Number = ");
      scanf("%d",&iValue);

       bRet = Check(iValue);

       if(bRet == TRUE)
       {
            printf("\n Divisible By 5");
       }
       else
       {
            printf("\n Not Divisible By 5");
       }

       return 0;
 }
 int Check(int iNo)
 {
      if(iNo % 5 == 0)
      {
           return TRUE;
      }
      else
      {
           return FALSE;
      }
 }

