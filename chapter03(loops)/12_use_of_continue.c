#include <stdio.h>
// WAP to print odd numbers from 1 to 100 using continue
int main(){
for(int i=1;i<=100;i++){
    if(i%2==0){// then even 
    continue; // is use to skip even numbers
    }
printf("%d  ",i);  
} 
    return 0;
}