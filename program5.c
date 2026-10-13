#include<stdio.h>

void Display(int iNo)
{
    
   static int i = 1;
   if(i <= iNo)
   {
        if(i % 2 == 0)
        {
            printf("Even number are :%d\n",i);
        }
      
        i++;
        Display(iNo);
   }
    

}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
    Display(iValue);
 
    
    return 0;
}