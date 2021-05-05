#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, r = 0, c = 0;

    printf("Enter Column Value for Pattern:");
    scanf("%d%d",&r,&c);

    printf("\n========Pattern=========\n\n");

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= r; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n============================\n");

    getch();
    return 0;
}
