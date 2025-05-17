// fibonacci series are 1,1,,2,3,5,8,13,21,34,55...  5th = 4th+3th
#include <stdio.h>
int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    printf("the fibonacci series are : 1 1 ");

int a =1;
int b =1,sum= 1;
    
    for( int i=1;i<=n-2;i++){ // n-2 aas laye aaya because 1,1 not in count
    sum = a+b;
    a=b;
    b=sum;  
       printf("%d ",sum);
    }
    return 0;
}