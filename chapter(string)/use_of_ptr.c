#include<stdio.h>
#include<string.h>
int main(){
char str[] ="sahil";
char *ptr=str;
str[7]="nadeem";
puts(ptr);

    return 0;
}