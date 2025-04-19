#include <stdio.h>
// **important     Q. take 3 positive integers input and print greatest of them all 3 are distinct
// 2nd method
int main(){
    int a,b,c;
printf("enter a =");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);
printf("enter c =");
scanf("%d",&c);
// no need of brackets when printf is in one line

if(a>b){ // b is out of race
     if(a>c)
        printf("%d is the greatest",a);
 else  //a<c     -> b<a<c
        printf("%d is the greastest",c);  
}


else{ // b>a    ->a is not greatest
    if(b>c)
        printf("%d is the greatest",b);
    
    else // c>b  ->  a<b<c
    printf("%d is the greatest",c);
}
    return 0;
}