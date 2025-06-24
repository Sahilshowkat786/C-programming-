#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("enter a string:");
    scanf("%[^\n]s", str); // remember 
    // size
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("the size is %d\n", size);
    // reverse ka leye
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string is ");
    puts(str);

    return 0;

}