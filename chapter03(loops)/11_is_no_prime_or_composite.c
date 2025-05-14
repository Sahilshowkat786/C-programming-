//  (v.v.v. imp )WAP to check if a number is prime or not
#include<stdio.h>
int main(){
int n,a =0;
printf("enter a number =");
scanf("%d",&n);
for(int i=2;i<=n-1;i++){
    if(n%i==0) // i is a factor of n  => composite
    a = 1;
    break;
}
if (n==1)printf("1 is neither prime nor composite\n");
else if(a==0)printf(" the  given no is prime\n");
else printf(" the given  no is composite");
    return 0;
}