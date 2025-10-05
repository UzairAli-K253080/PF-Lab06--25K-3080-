#include <stdio.h>

int main() {
    int balance = 50000, withdraw;
    while (balance > 0) {
        printf("\nCurrent Balance: %d\n", balance);
        printf("Enter withdrawal amount: ");
        scanf("%d", &withdraw);
        if (withdraw > balance)
            printf("Insufficient funds! Try again.\n");
        else if (withdraw <= 0)
            printf("Enter a valid amount.\n");
        else {
            balance -= withdraw;
            printf("Withdrawal successful! Remaining balance: %d\n", balance);
        }
    }
    printf("\nAccount balance is now zero.\n");
    return 0;
}
