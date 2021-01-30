#include<stdio.h>
#include<conio.h>
int main()
{
	char ch='X';
	printf("\n\t original value =%c\n",ch);
	ch=getchar();
	printf("\n\t value after getchar=%c \n",ch);
	ch=getch();
	printf("\n\t value after getch=%c \n",ch);
	ch=getche();
	printf("\n\t value after getche=%c \n",ch);
	return 0;
}