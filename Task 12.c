#include <stdio.h>

int main() {
    float prices[5], total = 0, avg;

    for (int i = 0; i < 5; i++) {
        printf("Enter price for shoe %d: ", i + 1);
        scanf("%f", &prices[i]);
        total += prices[i];
    }

    avg = total / 5;

    printf("\nTotal Price: %.2f\n", total);
    printf("Average Price: %.2f\n", avg);

    return 0;
}

