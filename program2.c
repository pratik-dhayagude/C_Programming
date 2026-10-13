#include<stdio.h>

void Display(int iNo)
{
    

    if(iNo != 0)
    {
     
        
        printf("%d\n", iNo);
        
        Display(iNo-1);
    }
}

int main()
{
    Display(6);
    return 0;
}