// factorial of a given no
#include <stdio.h>
int main(){
int n;
    printf("enter a number =");
    scanf("%d",&n);
    // 5! = 5x4x3x2x1
    int product =1;
    for( int i=1;i<=n;i++){
        product = product*i;
    }
    printf("the  factorial of %d is = %d",n,product);
    return 0;
}