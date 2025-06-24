#include <stdio.h>
#include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter a string= ");
//     scanf("%s", &str); // not giving word which are  after space
//     puts(str);
//     return 0;
// }

// method
int main()
{
    char str[100];
    printf("Enter a string= ");
    fgets(str, sizeof(str), stdin); // include spaces     or scanf("%[^\n]s",str)
                                    // scanf nahe lekh na
    puts(str);

    return 0;
}   