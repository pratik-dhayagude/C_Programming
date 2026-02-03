#include<stdio.h>

int main()

{
    int Arr[]={11,21,51,101,111};
    int*p=NULL;
    int*q=NULL;

    p=&(Arr[1]);
    q=&(Arr[4]);
        
    printf("result of subtraction is : %ld\n",q-p);//allow 

    q=q-2;  //allowed 
    printf("data pointed by q is :%d\n ",*q);

    return 0;
}
