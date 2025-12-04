#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200], enc[200];
    int i;

    printf("Enter Message: ");
    gets(text);

    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            enc[i] = (text[i] - base + 3) % 26 + base;
        } else {
            enc[i] = text[i];
        }
    }

    enc[i] = '\0';

    printf("\nEncrypted: %s\n", enc);
    printf("Decrypted: %s\n", text);

    return 0;
}
