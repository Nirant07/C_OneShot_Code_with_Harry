// Problem Statement: Write a C program to determine whether a given year is a leap year. 
// The program should take an integer input representing the year and check its divisibility by 4 to determine if it is a leap year.

#include<stdio.h>

int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0){
        printf("It is a leap year");
    } else {
        printf("It is not a leap year");
    }
}

// Working of the Code:
// The program begins by declaring an integer variable `year` to store the user's input.
// The user inputs the year using `scanf`.
// A condition checks if the year is divisible by 4 using the modulus operator (%). If `year % 4 == 0`, it is a leap year, and the message "It is a leap year" is printed.
// Otherwise, the program prints "It is not a leap year".
// Note: This program does not handle exceptions for years divisible by 100 but not by 400, which are not leap years (e.g., 1900).
// The program ends without a return statement, which can be improved by adding `return 0;` for better clarity and convention.
