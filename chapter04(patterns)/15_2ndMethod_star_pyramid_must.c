
// method having extra variables
#include <stdio.h>
int main(){
    int n;
    printf("Enter no of rows =");
    scanf("%d",&n);
    int nsp =n;  // no of spaces initially is n
    int nst =1; // no of stars initially is 1
for(int i=1;i<=n;i++){// rows
    for(int j=1;j<=nsp;j++) { // this loop is for spaces 
   printf(" ");
       }
for(int k=1;k<=nst;k++){// this loop is for stars
    printf("*");

    }
    nsp--;
    nst=nst+2;
    printf("\n");

}
    
    return 0;
}