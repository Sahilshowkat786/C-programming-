#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
