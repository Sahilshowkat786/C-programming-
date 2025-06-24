#include<stdio.h>
#include<string.h>
int main(){
struct book
{
  char  name[50];
  int no0fPages;
  float prise;

}book1,book2,book3;

 book1.no0fPages =100;
 book1.prise = 680;
 book2.no0fPages =345;
 book2.prise =1040;
 strcpy(book1.name,"concepts ofphyzks");
 strcpy(book2.name,"concepts of c programing");
printf("%d \n",book1.no0fPages);
printf("%.2f\n", book1.prise);
printf("%s\n",book1.name);
printf("%d \n",book2.no0fPages);
printf("%.2f\n", book2.prise);
printf("%s",book2.name);
    return 0;
}