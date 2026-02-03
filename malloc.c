#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length=0;

    int *Arr=NULL;
    
    printf("Enter the number of elements ");

    scanf("%d",&length);
    

    Arr=(int*)malloc(length * sizeof(int));

    if(Arr==NULL)
    {
        printf("unable to allocate memory\n");

    }
    else 
    {
        printf("mrmory get sucessfully allocated\n");

    }
      //step2:use the memory
      //step3:free the emory
      free(Arr);
       
    return 0;
}