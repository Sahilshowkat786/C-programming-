// WAP to count digit of a given no
#include<stdio.h>
int main(){
int n,count =0;
printf("enter a number =");
scanf("%d",&n);
while(n!=0){  // also ==>> n>0/n!=0
    n = n/10;
    count++;
}
printf("no. of digits  of given number are %d",count);
    return 0;
}