#include<stdio.h>
#include<stdbool.h>


void Display(int Size[],int iNo)
{
     static int i = 0;
     if(i< iNo)
     {
          printf("%d\t",Size[i]);
          i++;
          Display(Size,iNo);
     }
    
}

int main()
{
     int iNo = 0;
     int Arr[iNo];
     printf("Enter they number :\n");
     scanf("%d",&iNo);
     for(int i = 0;i<iNo;i++)
     {
          scanf("%d",&Arr[i]);
     }
     Display(Arr,iNo);
   
 
    
    return 0;
}