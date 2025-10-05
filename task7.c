#include <stdio.h>

int main() {
    int amount;
    int coins_25, coins_10, coins_5, coins_1;

    printf("Enter amount in cents: ");
    scanf("%d", &amount);

    coins_25 = amount / 25;
    amount %= 25;
    coins_10 = amount / 10;
    amount %= 10;
    coins_5 = amount / 5;
    amount %= 5;
    coins_1 = amount;

    printf("25c: %d\n10c: %d\n5c: %d\n1c: %d\n", coins_25, coins_10, coins_5, coins_1);
    return 0;
}
