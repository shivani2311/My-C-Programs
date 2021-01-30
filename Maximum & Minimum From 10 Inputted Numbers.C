#include<stdio.h>
#include<conio.h>

int main()
{
			int No = 0, Min = 0, Max = 0, Cnt = 0;
			
			printf("\n Enter 10 Numbers =>");
			
			for(Cnt =1; Cnt <=10; Cnt++)
			{
				printf("\n\t Enter Number %d =",Cnt);
				scanf("%d",&No);
				
				if(Cnt ==1)
				{
						Min = No;
						Max = No;
						continue;
			 	}
			 	
			 	   if(No < Min)
			 	   {
			 	   		Min = No;
			 	    }
			 	   
			 	   if(No > Max)
			 	   {
			 	   		Max = No;
			 	    }
		    	}
			printf("\n Press Any Key To Get Minimum From Given Numbers ->");
			getche();
			
			printf("\n Maximum of Given Numbers =%d",Max);
			printf("\n Minimum of Given Numbers =%d",Min);
			
			printf("\n\n Thanks");
			
			getch();
			return 0;
}