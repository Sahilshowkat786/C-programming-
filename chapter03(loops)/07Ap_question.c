#include <stdio.h>
// display this ap  4,7,10,13,16...... upto n terms
int main(){
    // a =4
    // d=3 
    // an = 3*n+1
    int n;
    printf("enter nth term =");
    scanf("%d",&n);
    for(int i=4;i<=(3*n-1);i=i+3){
        printf("%d ",i);
    }
    return 0;
}