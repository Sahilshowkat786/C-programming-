#include <stdio.h>

int main(){
    
   int n;
    printf("Enter no of rows =");
    scanf("%d",&n);
    int nsp= n-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){ // for spaces
   printf(" ");
    }
    nsp--;
    for(int k=1;k<=i;k++){// for numbers in pattern
        printf("%d",k);
    }
    
    int a =i-1;
    for(int q=1;q<=i-1;q++){ // extra cheez
        printf("%d",a);
a--;
}

printf("\n");
}

    return 0;
}