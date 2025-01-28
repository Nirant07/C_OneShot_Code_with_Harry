// do_while_loop.c
// Problem Statement:
// - Write a program that accepts a number `a` as input.
// - Use a `do-while` loop to print the value of `i` starting from 1.
// - The loop should continue until `i` is less than or equal to `a`.

#include<stdio.h>

int main(){
    int a;
    int i = 1;
    scanf("%d", &a);
    do {
        printf("The value of i is %d\n", i);
        i++;
    } while (i <= a);
    return 0;
}

// Working:
// - The program takes an integer input `a` from the user.
// - It initializes `i` to 1 and uses a `do-while` loop to print the value of `i`.
// - The loop executes at least once, then continues as long as `i` is less than or equal to `a`.
// - In each iteration, `i` is incremented by 1.
