#include<stdio.h>
#include<conio.h>

int main()
{
	int Day = 0;
	
	printf("\n Enter Day Number (1-7) to view Day text =");
	scanf("%d", &Day);
	
	switch(Day)
	{
		case1:
		         printf("\n Monday");
		         break;
		case2:
		         printf("\n Tuesday");
		         break;
		case3:
		          printf("\n Wednesday");
		         break;
		case4:
		          printf("\n Thursday");
		         break;
		case5:
		          printf("\n Friday");
		         break;
		case6:
		          printf("\n Saturday");
		         break;
		case7:
		          printf("\n Sunday");
		         break;
		 default:
		          printf("\n Invalid Day");
		          break;
	}
	
	printf("\n\n Thanks");
	
	getch();
    return 0;
}