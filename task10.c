#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, FV;

    printf("Enter principal amount: ");
    scanf("%lf", &P);
    printf("Enter annual interest rate (e.g., 0.05 for 5%%): ");
    scanf("%lf", &r);
    printf("Enter number of years: ");
    scanf("%lf", &t);

    FV = P * pow(1 + r, t);
    printf("Future value: %.2f\n", FV);
    return 0;
}
