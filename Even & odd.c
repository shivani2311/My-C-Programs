#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    printf("\n Enter integer Number=");
    scanf("%d",&Num);

    if(Num == 0);
    {
      printf ("\n Given Number is Neutral");
     }
      if(Num%2 == 0);
   {
      printf ("\n Number is EVEN");
    }
 else
   { 
      printf ("\n Number is ODD");
   }
      printf ("\nThanks");

    getch();
    return 0;
}