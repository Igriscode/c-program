#include <stdio.h>

int main() {
    int quantity;
    float price_per_apple, total;
    printf("Enter the quantity of apples: ");
    scanf("%d", &quantity);

    printf("Enter the price per apple: ");
    scanf("%f", &price_per_apple);
    total = quantity * price_per_apple;
    printf("Total amount to pay: %.2f\n", total);

    return 0;
}
