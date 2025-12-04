#include <stdio.h>

int main() {
    char names[5][20] = {"Ali", "Basit", "Ammar", "Daniyal", "Fatima"};
    int marks[5] = {85, 92, 78, 96, 88};

    int max = marks[0], index = 0;
    float sum = 0;

    printf("Name\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\n", names[i], marks[i]);

        if (marks[i] > max) {
            max = marks[i];
            index = i;
        }

        sum += marks[i];
    }

    printf("\nHighest Scorer: %s with %d marks", names[index], max);
    printf("\nAverage Marks: %.2f\n", sum / 5);

    return 0;
}
