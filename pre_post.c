
// increment_operators.c
// Problem Statement:
// - Demonstrate the difference between pre-increment and post-increment operators in C.
// - Use a series of `printf` statements to observe the changes in the value of `i`.

#include<stdio.h>

int main(){
    int i = 9;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", ++i);
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);
    return 0;
}

// Working:
// - The program initializes `i` to 9.
// - It demonstrates pre-increment (`++i`), where `i` is incremented before use.
// - It also demonstrates post-increment (`i++`), where the value of `i` is used first, then incremented.
// - The changes in the value of `i` are printed after each operation.