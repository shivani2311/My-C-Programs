#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, c = 0;

    printf("Enter Column values for Pattern:");
    scanf("%d",&c);

    printf("\n==========Pattern==========\n\n");

    for(i = 1; i <= c; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(i <= j)
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n==========Pattern==========\n\n");

    getch();
    return 0;
}
