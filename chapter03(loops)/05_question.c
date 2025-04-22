#include <stdio.h>
// print all the even numbers from 1 to 100
int main(){
    for(int i=1;i<=100;i++){
    if(i%2==0)printf("%d\n",i);   // for odd no`s  i%2!=0
    }

    return 0;
}