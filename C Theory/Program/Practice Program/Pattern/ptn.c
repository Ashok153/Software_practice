/*
*     
* *   
* * * 
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = num - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}