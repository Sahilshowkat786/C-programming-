// WAP to print reverse of a given no and store it
#include<stdio.h>
int main(){
int n,r=0;
printf("enter a number =");
scanf("%d",&n);
while(n!=0){  // also ==>> n>0/n!=0
    r = r*10;
    r = r + (n%10);
  //  r = r*10;
    n= n/10;
}
printf("the reverse no is %d",r);
    return 0;
}