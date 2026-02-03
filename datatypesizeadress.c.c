#include<stdio.h>

int main()

{
    char cValue='s';
    int ivalue=11;
    float fvalue=90.78f;
    double dvalue=98.564323;

   printf("size of character is : %lu\n",sizeof(cValue));
   printf("size of integer is : %lu\n",sizeof(ivalue));
   printf("size of float is : %lu\n",sizeof(fvalue));
   printf("size of double is : %lu\n",sizeof(dvalue));
   printf("Adress of cValue is :%lu\n",&cValue);
  printf("Adress of ivalue is :%lu\n",&ivalue);
printf("Adress of fvalue is :%lu\n",&fvalue);
printf("Adress of dvalue is :%lu\n",&dvalue);




    return 0;
}