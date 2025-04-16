#include<stdio.h>
// take two numbers from user and then swape 
int main(){
int a,b,temp;
// input from user
printf("enter ist no =");
scanf("%d",&a);
printf("entre 2nd no =");
scanf("%d",&b);
// use temporary varible for swapping
temp=a;     // without temp varible   a = a+b
a=b;        //                         b = a-b
b=temp;     //                         a =a-b
printf("after swapping:\n");
printf("ist no =%d\n",a);
printf("2nd no=%d\n",b);
    return 0;
}