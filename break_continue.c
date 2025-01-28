// break_continue.c
// Problem Statement:
// - Iterate through numbers from 1 to 20.
// - Print only the odd numbers.
// - Stop the process when the number 15 is encountered.

#include <stdio.h> 

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("The value of i is %d\n", i);
        if (i == 15) {
            break;
        }
    }
    return 0;
}

// Working:
// - The program loops through numbers from 1 to 20.
// - Even numbers are skipped using the `continue` statement.
// - Odd numbers are printed.
// - The loop stops when the value of `i` equals 15, using the `break` statement.
