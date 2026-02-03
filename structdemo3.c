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
   struct demo*p=&obj;

   p->i=21;
   p->f=34.67;
   p->f=45;

    
    
    return 0;
}