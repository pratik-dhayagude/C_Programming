#include<stdio.h>


int Power(int base, int power)
{
    static int i = 1;
    static int Mul = 1;

    if(i <= power)
    {
        Mul = Mul * base;
        i++;
        Power(base,power);
    }
    return Mul;
}

int main()
{
    int x = 0, n = 0;

    printf("Enter base : ");
    scanf("%d",&x);

    printf("Enter power : ");
    scanf("%d",&n);

    int iRet = Power(x, n);

    printf("Result is : %d\n", iRet);

    return 0;
}