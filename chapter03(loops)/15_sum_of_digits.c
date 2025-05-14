// WAP sum of digits of a given no
#include<stdio.h>
int main(){
int n,sum=0,last_digit =0;
printf("enter a number =");
scanf("%d",&n);
while(n!=0){  // also ==>> n>0/n!=0
    last_digit = n%10;
    sum = sum +last_digit;
    n =n/10;
}
printf("the sum of digits are %d",sum);
    return 0;
}