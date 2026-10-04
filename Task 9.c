#include <stdio.h>

int main() {
    int units[5], total_units = 0, highest, lowest;
    float current_bill, total_amount = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter units for household %d: ", i + 1);
        scanf("%d", &units[i]);
    }

    highest = units[0];
    lowest = units[0];

    for (int i = 0; i < 5; i++) {
        total_units += units[i];
        
        if (units[i] > highest) {
            highest = units[i];
        }
        if (units[i] < lowest) {
            lowest = units[i];
        }

        current_bill = units[i] * 10;
        if (units[i] > 500) {
            current_bill += current_bill * 0.05;
        }
        total_amount += current_bill;
    }

    printf("\nTotal Units Consumed: %d\n", total_units);
    printf("Highest Units Consumed: %d\n", highest);
    printf("Lowest Units Consumed: %d\n", lowest);
    printf("Total Amount Collected: %.2f\n", total_amount);

    return 0;
}

