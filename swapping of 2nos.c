#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0, Num2=0;
    printf("\nEnter 2 Number for Swapping=");
   scanf("%d%d",&Num1,&Num2);
   printf("\nBefore Swap1st Number=%d",Num1);
   printf("\nBefore Swap 2nd Number=%d",Num2);

   Num1=Num1+Num2;
   Num2=Num1-Num2;
   Num1=Num1-Num2;

   printf("\nAfter Swap 1st Number=%d",Num1);
    printf("\nAfter Swap 2nd Number=%d",Num2);
    printf ("\nThanks");
    getch();
    return 0;
}

