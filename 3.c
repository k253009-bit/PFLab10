#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter Text: ");
    gets(text);

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);

        if (ch == ' ')
            spaces++;
        else if (isdigit(ch))
            digits++;
        else if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpaces: %d", spaces);
    printf("\nTotal Characters: %d\n", vowels + consonants + digits + spaces);

    return 0;
}
