/* 
Name: Sammy Mwangi Kuria 
Reg No: CT101/G/26462/25
Date: 06/11/2025
Description: Program that creates sales.txt if missing, 
allows user to add transactions, reads all transactions,
calculates total sales for the day, and closes file properly.
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;
    int choice;

    // Try to open sales.txt for reading
    file = fopen("sales.txt", "r");

    // If file does not exist, create it
    if (file == NULL) {
        printf("File sales.txt not found. Creating a new one...\n");
        file = fopen("sales.txt", "w");
        if (file == NULL) {
            printf("Error: Could not create sales.txt\n");
            return 1;
        }
        printf("sales.txt file created successfully!\n");
        fclose(file);
    } else {
        fclose(file); // close it since we will reopen it later
    }

    // Ask if user wants to add transactions
    printf("Do you want to add new sales transactions? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);

    if (choice == 1) {
        file = fopen("sales.txt", "a"); // open for appending
        if (file == NULL) {
            printf("Error opening sales.txt for writing!\n");
            return 1;
        }

        int n, i;
        printf("Enter number of transactions: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            printf("Enter amount for transaction %d: ", i + 1);
            scanf("%f", &amount);
            fprintf(file, "%.2f\n", amount);
        }

        fclose(file);
        printf("Transactions successfully added to sales.txt\n");
    }

    // Now read all transactions and calculate total
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for reading\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("\nTotal Sales for the Day: %.2f\n", total);

    return 0;
}