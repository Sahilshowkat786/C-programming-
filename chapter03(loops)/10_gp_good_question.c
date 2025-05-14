// good question
#include <stdio.h>
// 100,97,94.....all +ve 
int main(){
   int a =100;
   for(int i =1; a>0;i++){    // condtion mai jab tak a >0 hoga tabtak print hoga
    printf("%d\n",a);
    a = a-3;
   } 
    return 0;
}