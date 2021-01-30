#include<stdio.h>
#include<conio.h>

int main()
{
			 int No = 0, Dig = 0, dsum = 0, Temp = 0;
			 
			 printf("Enter +ve Integer Number To Calculate its Digits sum :");
			 scanf("d%",&No);
			 
			 Temp = No;
			 
			 if(No >= 0)
			 {
			 	 printf("Invalid Number");return-1;
			 }
			 
			 while(Temp>0)
			 {
			 	  Dig = Temp % 10;
			 	  dsum = dsum + Dig;
			 	  Temp = Temp / 10;
			 }
			 
			 printf("\nsum of Digits in Given Number%d is = d",No,dsum);
			 
			 getch();
			 return 0;
}