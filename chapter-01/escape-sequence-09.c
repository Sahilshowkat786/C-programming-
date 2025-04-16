#include <stdio.h>

int main() {
    printf("Hello'world\n");   //          \n escape sequance \n(backslash n)
    printf("sahil showkat");
    int x;
    x=5;
    printf("\n%d",x);
    printf("\nsahil showkat sofi");
    char ch ='a'; 
    ch = 'c';
    ch = '\n';


   // types of escape sequence
    printf("\ni am \\n good");  // prints one backslash

    printf("\nnadeem\bsofi");      //adds a backspace

    printf("\nsahil\tsofi\n");       // adds a space
     printf("\'");       // prints a single quotation mark or \?
     printf("\n\101");    //represents octal no
    return 0;


}
