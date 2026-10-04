#include <stdio.h>

int main() {
    int units[5];
    float bills[5], total_amount = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter units for household %d: ", i + 1);
        scanf("%d", &units[i]);
        
        bills[i] = units[i] * 10;
        if (units[i] > 500) {
            bills[i] += bills[i] * 0.05;
        }
        total_amount += bills[i];
    }

    printf("\n--- Bill Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Household %d Bill: %.2f\n", i + 1, bills[i]);
    }
    printf("Total Amount Collected: %.2f\n", total_amount);

    return 0;
}

