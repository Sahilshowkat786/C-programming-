#include <stdio.h>
// find if 3 given numbers can be sides of a triangle
int main(){
    int a,b,c;  // a,b,c are sides of a triangle
printf("enter ist side =");
scanf("%d",&a);
printf("enter 2nd side =");
scanf("%d",&b);
printf("enter 3rd side=");
scanf("%d",&c);


if((a+b)>c&& (b+c)>a&&(c+a)>b){
    printf("valid triangle");
}
else{
    printf("invalid triangle");}

    return 0;
}