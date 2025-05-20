#include<stdio.h>
// basic rectangular pattern
int main(){

int n;
printf("Enter no of rows =");
scanf("%d",&n);
int m;
printf("Enter no of columns =");
scanf("%d",&m);
for(int i=1;i<=n;i++){ // outer loop signifies no of rows
    for(int j=1;j<=m;j++){// inner loop signifies no of columns
printf("*");

    }
    printf("\n");
}


    return 0;
}