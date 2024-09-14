#include <stdio.h>
const int  MAX_TRANSACTIONS= 5; // Maximum number of transactions to store

// Function prototypes
void checkBalance(float balance);
void depositMoney(float *balance, float transactions[], int *transactionCount);
void withdrawMoney(float *balance, float transactions[], int *transactionCount);
void viewLastFiveTransactions(float transactions[], int transactionCount);

int main() {
    float balance = 1000.0; // Starting balance
    float transactions[MAX_TRANSACTIONS] = {0}; // Transaction history
    int transactionCount = 0; // Number of transactions made

    int choice;
    
    while (1) {
        // Display the menu
        printf("\nWelcome to Mini-Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. View Last 5 Transactions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user's choice
        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(&balance, transactions, &transactionCount);
                break;
            case 3:
                withdrawMoney(&balance, transactions, &transactionCount);
                break;
            case 4:
                viewLastFiveTransactions(transactions, transactionCount);
                break;
            case 5:
                printf("Thank you for using Mini-Banking System. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Function to check balance
void checkBalance(float balance) {
    printf("Your balance is: Rs %.2f\n", balance);
}

// Function to deposit money
void depositMoney(float *balance, float transactions[], int *transactionCount) {
    float amount;
    printf("Enter deposit amount: Rs ");
    scanf("%f", &amount);

    if (amount > 0) {
        *balance += amount;
        printf("Deposit successful. New balance: Rs %.2f\n", *balance);

        // Record the transaction
        if (*transactionCount < MAX_TRANSACTIONS) {
            transactions[*transactionCount] = amount;
        } else {
            // Shift transactions to make room for the new one
            for (int i = 1; i < MAX_TRANSACTIONS; i++) {
                transactions[i - 1] = transactions[i];
            }
            transactions[MAX_TRANSACTIONS - 1] = amount;
        }
        (*transactionCount)++;
    } else {
        printf("Invalid deposit amount.\n");
    }
}

// Function to withdraw money
void withdrawMoney(float *balance, float transactions[], int *transactionCount) {
    float amount;
    printf("Enter withdrawal amount: Rs ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= *balance) {
        *balance -= amount;
        printf("Withdrawal successful. New balance: Rs %.2f\n", *balance);

        // Record the transaction as a negative value
        if (*transactionCount < MAX_TRANSACTIONS) {
            transactions[*transactionCount] = -amount;
        } else {
            // Shift transactions to make room for the new one
            for (int i = 1; i < MAX_TRANSACTIONS; i++) {
                transactions[i - 1] = transactions[i];
            }
            transactions[MAX_TRANSACTIONS - 1] = -amount;
        }
        (*transactionCount)++;
    } else if (amount > *balance) {
        printf("Insufficient balance.\n");
    } else {
        printf("Invalid withdrawal amount.\n");
    }
}

// Function to view the last five transactions
void viewLastFiveTransactions(float transactions[], int transactionCount) {
    printf("Last 5 Transactions:\n");
    int count = transactionCount > MAX_TRANSACTIONS ? MAX_TRANSACTIONS : transactionCount;
    if (count == 0) {
        printf("No transactions available.\n");
    } else {
        for (int i = 0; i < count; i++) {
            if (transactions[i] > 0) {
                printf("%d. +Rs %.2f\n", i + 1, transactions[i]);
            } else {
                printf("%d. -Rs %.2f\n", i + 1, -transactions[i]);
            }
        }
    }
}
