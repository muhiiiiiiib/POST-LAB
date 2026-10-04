#include <stdio.h>

int main() {
    float prices[5], total = 0, avg, highest, lowest;

    for (int i = 0; i < 5; i++) {
        printf("Enter price for shoe pair %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    highest = prices[0];
    lowest = prices[0];

    for (int i = 0; i < 5; i++) {
        total += prices[i];
        if (prices[i] > highest) {
            highest = prices[i];
        }
        if (prices[i] < lowest) {
            lowest = prices[i];
        }
    }

    avg = total / 5;

    printf("\nHighest Shoe Price: %.2f\n", highest);
    printf("Lowest Shoe Price: %.2f\n", lowest);
    printf("Total Price: %.2f\n", total);
    printf("Average Price: %.2f\n", avg);

    return 0;
}

