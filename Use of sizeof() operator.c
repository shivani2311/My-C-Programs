#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\nsize for integer variable in this environment=%d",sizeof(int));
	printf("\nsize for character variable in this environment=%d",sizeof(char));
	printf("\nsize for short int variable in this environment=%d",sizeof(short int )); 
	printf("\nsize for float variable in this environment=%d",sizeof(float));
	printf("\nsize for doublevariable in this environment=%d",sizeof(double)); 
	
    getch();
    return 0;
}