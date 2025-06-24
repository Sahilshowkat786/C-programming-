#include <stdio.h>
// addition of two matrices
int main(){
    int mat1 [2][2]={1,2,3,4};// or {(1,2),(5,6)};// 1 2     5 6
    int mat2 [2][2]={5,6,7,8};               //      3 4     7 8
  int result[2][2];
   for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j]=mat1[i][j] +mat2[i][j];
        }
       
    }
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}