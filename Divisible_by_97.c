// Problem Statement: Write a C program to check if a given number is divisible by 97. 
// The program should take an integer input from the user and determine divisibility using the modulus operator (%).

#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%97==0){
        printf("It is divisible");
    } else {
        printf("It is not divisible");
    }
}

// Working of the Code:
// The program begins by declaring an integer variable `num` to store the user input.
// The user inputs a number using `scanf`.
// The modulus operator (%) is used to check if the number is divisible by 97. If the remainder is 0, the number is divisible by 97.
// Depending on the result of the condition `num % 97 == 0`, the program prints "It is divisible" or "It is not divisible" using `printf`.
// The program ends without a return statement, which can be improved by adding `return 0;` for proper program termination.
