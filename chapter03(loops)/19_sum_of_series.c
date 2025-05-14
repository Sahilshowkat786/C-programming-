// WAP to print the sum of this series 1-2+3-4+5-6....
#include<stdio.h>
int main(){
    int n, sum=0;
printf("enter a  nth term =");
scanf("%d",&n);
// odd no => adds
// even no => sub
for(int i =1; i<=n;i++) // its prints 1 to n all numbers
if(i%2!=0) sum = sum +i;
else sum = sum -i;  // or if===>>> else
printf("sum of the first %d terms are  = %d",n,sum);
    return 0;
}
//2nd method (use  maths)
/*if n is even ==>> sum = -n/2
if n is odd  ===>> sum = -n/2 +n */