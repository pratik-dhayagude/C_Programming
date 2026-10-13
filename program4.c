#include<stdio.h>

int Display(int iNo)
{
    
   
     static  int Fact = 1;
    if(iNo != 0)
    {
       Fact = Fact * iNo;        
        Display(iNo-1);
    }
    return Fact;

}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
  int iRet =  Display(iValue);
  printf("Factorial are :%d\n",iRet);
    
    return 0;
}