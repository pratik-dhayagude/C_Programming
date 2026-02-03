#include<stdio.h>
#include<stdlib.h>

int main()
{
   

    int *Arr=NULL;
    
    //step1:allocate memory

    Arr=(int*)malloc(5 * sizeof(int));

     //step2:use the memory

     Arr=(int*)realloc(Arr,10 * sizeof(int));
      
      //step3:free the emory
      free(Arr);
       
    return 0;
}