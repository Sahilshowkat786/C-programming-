#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "pointer";
    char *ptr = str;
    int len = strlen(str);

    printf("String in reverse: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", *(ptr + i));
    }

    return 0;
}
