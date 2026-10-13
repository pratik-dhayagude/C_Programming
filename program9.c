#include<stdio.h>

int Display(int iNo)
{
    
    static int iDigit = 0;
    static int iRev = 0;
   if(iNo == 0)
   {
    return 0;
   }
   else
   {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo /10;
        Display(iNo);


   }
   return iRev;


}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
   int iRet =  Display(iValue);
   printf("Reverse is:%d\n",iRet);
 
    
    return 0;
}