#include<stdio.h>
int main (){
int n, i,j;
printf("Enter no of rows =");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
    if(i%2!=0){ // odd lines pa hai =>numbers
     
       printf("%d ",j);
       }
else {      // even lines pa hai => letters
int a = 64+j;
 char ch = (char)a;   
printf("%c ",a);
              }

         }
printf("\n");
    }

    return 0;
 }