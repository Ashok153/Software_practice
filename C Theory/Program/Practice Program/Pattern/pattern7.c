
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter row\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}