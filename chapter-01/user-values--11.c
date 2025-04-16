#include<stdio.h>

// problem no 02::take two numbers from user and then product and divide them
int main(){
float num1,num2,product=1,division=1;    // this is identity factor in sum=0 in addition and sum =1 in multiplicatio,division 
printf("entre value of ist no=");
scanf("%f",&num1);
printf("entre value of 2nd no=");
scanf("%f",&num2);
product=num1*num2;
division=num1/num2;
printf("the product of %fand %f is %f",num1,num2,product);
printf("\nthe division of %fand %f is %f",num1,num2,division);   //we use here \n (backslash n)


    return 0;
}