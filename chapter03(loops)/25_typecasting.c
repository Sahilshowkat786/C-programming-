#include <stdio.h>
// WAP to print all the ASCII values and the equivalent char
// of 26 capital alphabits using while loop
int main(){
   for(int i=65; i<=90;i++){
printf("%d=>",i);
char ch = (char)i;
printf("%c\n",ch);
   } 
    return 0;
}