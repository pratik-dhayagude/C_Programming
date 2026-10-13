#include<stdio.h>
#include<stdbool.h>


bool Display(int iNo)
{
    
    static int iDigit = 0;
    static int iRev = 0;
    int temp = iNo;
   if(iNo == 0)
   {
        return 0 ;
   }
   else
   {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo /10;
        Display(iNo);


   }
   return temp == iRev;


}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
     bool iRet =  Display(iValue);
    if(iRet)
    {
        printf("The number is palindrome:%d\n",iValue);
    }
    else

    {
         printf("The number is not palindrome:%d\n",iValue);

    }
 
    
    return 0;
}