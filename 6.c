#include <stdio.h>

int main() {
    char names[5][20] = {"Ali", "Basit", "Ammar", "Danyal", "Fatima"};
    int marks[5] = {85, 92, 78, 96, 88};

    int max = marks[0], index = 0;
    float sum = 0;

    printf("Student Marks Table\n");
    printf("----------------------------\n");
    printf("Name\t\tMarks\n");
    printf("----------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-10s\t%d\n", names[i], marks[i]);

        if (marks[i] > max) {
            max = marks[i];
            index = i;
        }

        sum += marks[i];
    }

    printf("----------------------------\n");
    printf("Top Student: %s with %d marks\n", names[index], max);
    printf("Class Average: %.2f\n", sum / 5);

    return 0;
}
