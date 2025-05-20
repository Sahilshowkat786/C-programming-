#include <stdio.h>

int main(){
    int n;
    printf("Enter no of rows =");
    scanf("%d",&n);
for(int i=1;i<=n;i++){ 
    for(int j=1;j<=n+1-i;j++){
printf("*");

    }
    printf("\n");
}
 
    return 0;
} 
// or can be....
// int n;
//     printf("Enter no of rows =");
//     scanf("%d",&n);
//     int a=n;
// for(int i=1;i<=n;i++){ 
//     for(int j=1;j<=n+1-i;j++){
// printf("*");

//     }
// a--;
//     printf("\n");
// }

// return 0;
//  } 


