#include <stdio.h>
int main()
{
    int r, c;// from user take rows and columns
    printf("Enter no of rows=");
    scanf("%d", &r);
    printf("Enter no of columns=");
    scanf("%d", &c);
    int mat[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)// input matrix
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("The required matrix are :\n");
    for (int i = 0; i < r; i++)// output matrix
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}