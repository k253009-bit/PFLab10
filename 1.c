#include <stdio.h>
#include <string.h>

int main() {
    char word[4][20] = {"Apple", "Grapes", "Kiwi", "Orange"};

    strcpy(word[1], "Watermelon");

    int i, j;

    for(i = 0; i < 4; i++) {
        printf("\n%s\n", word[i]);
        printf("Length of word is: %lu\n", strlen(word[i]));

        printf("Vertical:\n");
        for(j = 0; j < strlen(word[i]); j++) {
            printf("%c\n", word[i][j]);
        }
    }

    return 0;
}
