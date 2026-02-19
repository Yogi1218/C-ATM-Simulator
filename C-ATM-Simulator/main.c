//
//  main.c
//  C-ATM-Simulator
//
//  Created by Yogi Patel on 19/02/26.
//
#include <stdio.h>

int balance = 1000;  // Initial balance
int correctPIN = 1234;

void checkBalance() {
    printf("\nCurrent Balance: %d\n", balance);
}

void deposit() {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful!\n");
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw() {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= balance && amount > 0) {
        balance -= amount;
        printf("Withdrawal successful!\n");
    } else {
        printf("Insufficient balance or invalid amount!\n");
    }
}

int main() {
    int enteredPIN, attempts = 0;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == correctPIN) {
            printf("Access Granted!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN! Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Card Blocked!\n");
        return 0;
    }

    int choice;

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}

