#include<stdio.h>
#include<conio.h>

int main()
{
			int No,Max = 0, Cnt = 0;
			
			printf("\n Enter 10 Numbers =>");
			
			for(Cnt = 1; Cnt <=10;Cnt++)
			{
						printf("\n\t Enter Number %d =",Cnt);
						scanf("%d",&No);
						
						if(Cnt==1)
						{
									Max=No;
									continue;
						}
						
						if(No>Max)
						{
									Max=No;
						}
			}
			printf("\n Press Any Key To Get Maximum From Given Numbers ->");
			getche();
			
			printf("\n Maximum of Given Numbers =%",Max);
			
			printf("\n\n Thanks");
			
			getch();
			return 0;
}