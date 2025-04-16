#include <stdio.h>
// area of rectangle take length and breadth from user
int main(){
    int length,breadth;
    printf("entre length of rectangle=");

    scanf("%d",&length);
    printf("entre breadth of rectangle=");
    scanf("%d",&breadth);
   // area = length*breadth;
    printf("area of rectangle is %d",length*breadth);
    return 0;
}