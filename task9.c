#include <stdio.h>
#include <math.h>

int main() {
    double people, cost;
    printf("Enter number of people: ");
    scanf("%lf", &people);

    cost = ceil(people * 250.50);
    printf("Total ticket cost: Rs %.0f\n", cost);
    return 0;
}
