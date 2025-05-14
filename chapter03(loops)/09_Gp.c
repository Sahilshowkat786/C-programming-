// display a gp 1,2,4,8,16......n
#include<stdio.h>
int main(){
int n;
printf("enter n th term =");
scanf("%d",&n);
int a =1;
for(int i =1;i<=n;i++){
    printf("%d\n",a);
    a=a*2;
}

    return 0;
}