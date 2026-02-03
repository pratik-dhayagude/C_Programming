#include<stdio.h>
struct demo
{

   int i;
   float f;



};
struct hello
{

    int no;
    float marks;
    struct demo dobj;  //nested 
};
int main()

{
    printf("size of hello structure is : %lu\n ",sizeof (struct hello ));
   
    return 0;
}