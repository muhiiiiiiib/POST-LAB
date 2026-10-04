#include <stdio.h>

int main() {
    float prices[5], total = 0, discount = 0, final_amount;

    for (int i = 0; i < 5; i++) {
        printf("Enter price for product %d: ", i + 1);
        scanf("%f", &prices[i]);
        total += prices[i];
    }

    if (total > 10000) {
        discount = total * 0.10;
    }
    final_amount = total - discount;

    printf("\nOriginal Total: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", final_amount);

    return 0;
}

