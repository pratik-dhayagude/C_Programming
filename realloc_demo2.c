#include<stdio.h>
#include<stdlib.h>

int main()
{
   

    int *Arr=NULL;
    
    //step1:allocate memory

    Arr=(int*)malloc(5 * sizeof(int));  //20

     //step2:use the memory

     Arr=(int*)realloc(Arr,3* sizeof(int)); //12
      
      //step3:free the emory
      free(Arr);
       
    return 0;
}