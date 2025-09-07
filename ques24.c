//Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("No units consumed. Bill = 0\n");
    }
    else if (units <= 100) {
        bill = units * 5;
        printf("Electricity Bill: %d\n", bill);
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Electricity Bill: %d\n", bill);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Electricity Bill: %d\n", bill);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("Electricity Bill: %d\n", bill);
    }

    return 0;
}
