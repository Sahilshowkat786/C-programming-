#include<stdio.h>
// 1
// 23
// 456
// 78910
  

int main (){
int n;
printf("Enter no of rows=");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){
    for(int j =1;j<=i;j++){
        
    printf("%d ",a);
a++;
}

printf("\n");
}



    return 0;
}