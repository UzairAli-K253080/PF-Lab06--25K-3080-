#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter number of participants: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Total arrangements (Factorial): %llu\n", fact);
    return 0;
}
