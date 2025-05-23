//     *
//    *** 
//   *****

#include <stdio.h>
int main(){
    int n;
    printf("Enter no of rows =");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++) { // this loop is for spaces 
   printf(" ");
       }
for(int k=1;k<=2*i-1;k++){
    printf("*");

    }
    printf("\n");

}
    
    return 0;
}
// 2nd method on copy