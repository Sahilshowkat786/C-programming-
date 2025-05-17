// print nth fibonacci number
#include <stdio.h>
int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);

int a =1;
int b =1,sum= 1;
    
    for( int i=1;i<=n-2;i++){ // n-2 aas laye aaya because 1,1 not in count
    sum = a+b;
    a=b;
    b=sum;  
    }
       printf("the %dth fibonacci is %d",n,sum);
    
    return 0;
}