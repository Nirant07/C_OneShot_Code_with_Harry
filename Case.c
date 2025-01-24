// Problem Statement: Write a C program to determine whether a given character is uppercase or lowercase. 
// The program should take a single character as input and use its ASCII value to identify its case.

#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    int n = (int)ch;
    if(n<97){
        printf("Its uppercase");
    } else {
        printf("Its lowercase");
    }
}

// Working of the Code:
// The program starts by declaring a character variable `ch` to store the user input and an integer variable `n` to store the ASCII value of `ch`.
// The user inputs a single character using `scanf`. The character's ASCII value is then obtained by casting it to an integer.
// If the ASCII value (`n`) is less than 97, the character is uppercase (ASCII values for 'A' to 'Z' range from 65 to 90).
// Otherwise, the character is lowercase (ASCII values for 'a' to 'z' range from 97 to 122).
// The program uses `printf` to display whether the character is uppercase or lowercase.
