// Problem Statement: Write a C program to check if a person is legally an adult based on their age. 
// The program should output "Legal" if the age is greater than 18, otherwise "Not Legal".

#include<stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    age>18?printf("Legal"):printf("Not Legal");
}

// Working of the Code:
// The program begins by declaring an integer variable `age` to store the user's input.
// The user inputs their age using `scanf`.
// The ternary operator is used to check if the age is greater than 18:
// - If true, it prints "Legal".
// - If false, it prints "Not Legal".
// The program ends without a return statement, which can be improved by adding `return 0;` for better structure.
