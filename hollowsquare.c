/* Write a program to print hollow square star pattern */

#include <stdio.h>
int main()
{
    int i, j, rows, columns;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= columns; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == columns)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}