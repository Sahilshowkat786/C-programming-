#include <stdio.h>
// display this ap  4,7,10,13,16...... upto n terms without maths
int main(){
    int n;    // n bar loop chalega
    printf("enter nth term =");
    scanf("%d",&n);
  
        // we use extra varibles 
        int a =4;
       for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a = a+3;
    }
    return 0;
}