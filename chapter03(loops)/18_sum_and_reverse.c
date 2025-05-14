// WAP to print the sum of a given no and reverse it.(h.w question)
#include<stdio.h>
int main(){
int n,r=0,sum=0;
printf("enter a number =");
scanf("%d",&n);
sum =n;
while(n!=0){  // also ==>> n>0/n!=0
    r = r*10;
    r = r + (n%10);
  //  r = r*10;
    n= n/10;
}
printf("the reverse no is %d\n",r);
sum = sum +r;
printf("sum %d",sum);
    return 0;
}