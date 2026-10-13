#include<stdio.h>

int Display(int iNo)
{
    static int iDigit = 0;
    static int iCount = 0;
   if(iNo == 0)
   {
    return 0;
   }
   else
   {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo /10;
        Display(iNo);


   }
   return iCount;


}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
   int iRet =  Display(iValue);
   printf("Count is:%d\n",iRet);
 
    
    return 0;
}