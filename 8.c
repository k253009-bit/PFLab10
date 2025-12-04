#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};

    char items[3][3][20] = {
        {"Spring Rolls", "Soup", "Garlic Bread"},
        {"Burger", "Pizza", "Pasta"},
        {"Ice Cream", "Cake", "Brownie"}
    };

    float prices[3][3] = {
        {6.5, 5.0, 7.5},
        {12.0, 15.0, 13.0},
        {4.5, 6.0, 5.5}
    };

    printf("\n----- RESTAURANT MENU -----\n");

    for (int i = 0; i < 3; i++) {
        printf("\n%s\n", categories[i]);
        printf("--------------------------\n");

        for (int j = 0; j < 3; j++) {
            printf("%-15s $%.2f\n", items[i][j], prices[i][j]);
        }
    }

    printf("\n----- BUDGET FRIENDLY ITEMS (Under $10) -----\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (prices[i][j] < 10) {
                printf("%-15s ($%.2f) - %s\n",
                       items[i][j], prices[i][j], categories[i]);
            }
        }
    }

    return 0;
}
