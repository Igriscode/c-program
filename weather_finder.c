#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);
   if (temperature < 10.0) {
        printf("The day is Cold.\n");
    } else if (temperature >= 10.0 && temperature <= 40.0) {
        printf("The day is Normal.\n");
    } else {
        printf("The day is Hot.\n");
    }

    return 0;
}
