#include <stdio.h>
// **important     Q. take 3 positive integers input and print greatest of them all 3 are distinct
int main(){
    int a,b,c;
printf("enter a =");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);
printf("enter c =");
scanf("%d",&c);


if(a>b&& a>c){
    printf("%d is greatest",a);
}
if(b>a&& b>c){
    printf("%d is greatest",b);
}
if(c>a&& c>b){
    printf("%d is greatest",c);
}


    return 0;
}