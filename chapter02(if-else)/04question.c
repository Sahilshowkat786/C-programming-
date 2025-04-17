// any year is input through the keyboard write a program to det wheather the year is leap or not 
#include <stdio.h>

int main(){
    int y;
    printf("enter year="); // leap years are divisible by 4
    scanf("%d",&y);
    if(y%4==0){
         printf("leap year");
    }
    else{printf("not a leap year"); 
    }
    return 0;
}