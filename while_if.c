// while_loop.c
// Problem Statement:
// - Write a program to use a `while` loop to iterate through numbers from 0 to 20.
// - Print the value of `i` only when it is greater than 10.

#include<stdio.h>

int main(){
    int i = 0;
    while(i <= 20){
        if(i > 10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    return 0;
}

// Working:
// - The program initializes `i` to 0 and uses a `while` loop to iterate until `i` reaches 20.
// - Inside the loop, it checks if `i` is greater than 10.
// - If true, it prints the value of `i`.
// - The variable `i` is incremented in each iteration to ensure the loop progresses.
