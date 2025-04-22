#include <stdio.h>
// print the table of 'n' input from user
int main(){
    int n,i,k;
    printf("enter a table =");
    scanf("%d",&n);
    for(int i=n;i<=200;i=i+n){
        printf("%d\n",i);   
        }
    return 0;
}