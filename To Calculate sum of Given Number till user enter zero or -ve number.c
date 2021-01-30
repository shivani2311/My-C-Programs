#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
			 int No = 0, Sum = 0, Cnt = 0; 
			 
			 printf("\n Enter Number To calculate Their Sum \n (will stop summation After 0/-ve Inpute )=>");
			 
			 for (Cnt = 1; ;Cnt ++)
			 {
			 			printf("\n\t Enter Number %d=",Cnt);
			 			scanf("%d",&No);
			 			
			 			if(No <= 0)
			 			{
			 				 break;
			 			}
			 			
			 			Sum = Sum + No;
		  	 }
		  	 
		  	 printf("\n Press Any Key To Get Summation Of Given Numbers ->");
		  	 getche();
		  	 system("cls");
		  	 
		  	 printf("\n summation of Given Numbers =%d",Sum);
		  	 
		  	 printf("\n\n Thanks");
		  	 getch();
		  	 return 0;
}