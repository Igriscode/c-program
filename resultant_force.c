#include <stdio.h>

int main() {
    float m, a, F;
    printf("Enter the mass (m): ");
    scanf("%f", &m);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    F = (m * a) + (m / a);
    printf("The resultant force is: %.2f\n", F);

    return 0;
}
