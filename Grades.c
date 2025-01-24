// Problem Statement: Write a C program to determine the grade of a student based on their score. 
// The program should take an integer input representing the score and assign grades based on predefined ranges.

#include<stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if(score>90){
        printf("Your Grade is S");
    } else if(score>80){
        printf("Your Grade is A");
    } else if(score>70){
        printf("Your Grade is B");
    } else if(score>60){
        printf("Your Grade is C");
    } else if(score>50){
        printf("Your Grade is D");
    } else {
        printf("You are a Failure");
    }
}

// Working of the Code:
// The program starts by declaring an integer variable `score` to store the user's input.
// The user inputs their score using `scanf`.
// A series of conditional statements (`if-else if-else`) checks the score against specified ranges:
// - Above 90: Grade S
// - 81 to 90: Grade A
// - 71 to 80: Grade B
// - 61 to 70: Grade C
// - 51 to 60: Grade D
// - 50 or below: Failure
// Based on the conditions satisfied, the corresponding grade or failure message is printed using `printf`.
// The program ends without a return statement, which can be improved by adding `return 0;` for proper termination.
