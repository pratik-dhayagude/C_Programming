#include<stdio.h>

int Display(int iNo)
{
    
    static int i = 1;
   static int iSum = 0;
    if(i <= iNo)
    {
        iSum = iSum + i;
        printf("%d\t",i);
        i++;
        Display(iNo);
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
    int iRet =  Display(iValue);
    printf("Summation is = %d\n",iRet);
    return 0;
}