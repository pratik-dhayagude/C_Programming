#include<stdio.h>
struct demo
{

    int i;
    float f;
    int j;
}
int main()

{
    struct demo obj;
    
    

    printf("size of demo is : %lu\n",sizeof(struct demo));
    printf("size of object is :%lu\n",sizeof(obj));
    return 0;
}