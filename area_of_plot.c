#include <stdio.h>

int main() {
    float length, breadth, area;
    printf("Enter the length of the plot: ");
    scanf("%f", &length);

    printf("Enter the breadth of the plot: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("The area of the rectangular plot is: %.2f\n", area);

    return 0;
}
