#include <stdio.h>

int main() {
    int value, sum = 0;

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &value);
        if (value == 0) break;
        sum += value;
        printf("Current sum: %d\n", sum);
    }
    printf("Final total: %d\n", sum);
    return 0;
}
