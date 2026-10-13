#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
     
        
        printf("%d\n", i);
           i++;
        Display(iNo);
    }
}

int main()
{
    Display(6);
    return 0;
}