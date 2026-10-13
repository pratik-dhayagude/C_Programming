#include<stdio.h>
#include<stdbool.h>


int Display(int iNo)
{
     static int i = 0;
     static int Digit = 0;
     static int iSum = 0;

     if(iNo != 0)
     {
          Digit = iNo %10;
          iSum = iSum + Digit;
          Display(iNo /10);

     }
     return iSum;
    
    


}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
     int  iRet =  Display(iValue);
     printf("Summation is %d\n",iRet);
   
 
    
    return 0;
}