#include<stdio.h>
struct demo
{

    int i;
    float f;
    int j;
};

int main()

{
    struct demo obj;
    
    obj.i=12;
    obj.f=65.78;
    int.j=67;

    printf("%d\n",obj.i);
    printf("%d\n",obj.f);
    printf("%d\n",obj.j);

    
    
    return 0;
}