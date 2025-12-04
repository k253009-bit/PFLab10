#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char *at;

    printf("Enter Email: ");
    gets(email);

    at = strchr(email, '@');

    if (at == NULL)
        printf("Invalid email\n");
    else
        printf("Domain: %s\n", at + 1);

    return 0;
}
