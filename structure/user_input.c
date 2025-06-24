#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int no0fPages;
        float prise;

    } book1, book2, book3;

    printf("Enter name of book1=");
    scanf("%[^\n]s", book1.name);

    printf("Enter no of pages of book1=");
    scanf("%d", &book1.no0fPages);

    printf("Enter prise of book1=");
    scanf("%f", &book1.prise);
    printf("book1 detail: \n");
    printf("name :%s\n", book1.name);
    printf("no of pages :%d \n", book1.no0fPages);
    printf("prise :%.2f\n", book1.prise);

    return 0;
}