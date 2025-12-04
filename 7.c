#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Ali", "Basit", "Ammar", "Danyal"};

    char courses[4][5][20] = {
        {"Math", "Physics", "Chemistry"},                 
        {"Biology", "English"},                         
        {"Math", "Physics", "CS", "Statistics"},        
        {"History", "English", "Psychology"}          
    };

    int courseCount[4] = {3, 2, 4, 3};

    printf("STUDENT COURSE REGISTRATION\n");
    printf("-------------------------------\n");

    for (int i = 0; i < 4; i++) {
        printf("%s is taking: ", students[i]);
        for (int j = 0; j < courseCount[i]; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }
    char searchCourse[20];
    printf("\nEnter course to search (e.g., Physics): ");
    gets(searchCourse);

    printf("Students taking %s:\n", searchCourse);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < courseCount[i]; j++) {
            if (strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s\n", students[i]);
            }
        }
    }
    printf("\nOverloaded Students (More than 3 courses):\n");
    for (int i = 0; i < 4; i++) {
        if (courseCount[i] > 3) {
            printf("%s (%d courses)\n", students[i], courseCount[i]);
        }
    }

    return 0;
}
