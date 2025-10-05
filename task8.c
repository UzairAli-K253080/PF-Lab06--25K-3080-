#include <stdio.h>
#include <math.h>

int main() {
    double I, S, M;
    printf("Enter intensity (I): ");
    scanf("%lf", &I);
    printf("Enter standard value (S): ");
    scanf("%lf", &S);

    M = log10(I / S);
    printf("Earthquake magnitude: %.2f\n", M);
    return 0;
}
