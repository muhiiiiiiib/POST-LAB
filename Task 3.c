#include <stdio.h>

int main() {
    int total = 0, count = 0, amount;

    while (1) {
        printf("Enter recharge amount: ");
        scanf("%d", &amount);

        if (amount <= 0) {
            break;
        }

        total += amount;
        count++;

        if (total > 5000) {
            printf("Recharge Limit Reached\n");
            break;
        }
    }

    printf("Total Recharged Amount: %d\n", total);
    printf("Number of Recharge Attempts: %d\n", count);

    return 0;
}

