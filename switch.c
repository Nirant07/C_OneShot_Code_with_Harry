// Problem Statement: Write a C program that takes an integer input and uses a switch-case statement 
// to print the corresponding message for numbers 1, 2, and 3. If the number does not match any case, 
// it should print a default message indicating no match.

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Your Number is 1");
        break;
        case 2:
        printf("Your Number is 2");
        break;
        case 3:
        printf("Your Number is 3");
        break;
        default:
        printf("Sorry No Match Found");
    }
}

// Working of the Code:
// The program starts by declaring an integer variable `a` to store the user's input.
// The user inputs a number using `scanf`.
// A `switch` statement is then used to compare the value of `a`:
// - If `a` is 1, it prints "Your Number is 1".
// - If `a` is 2, it prints "Your Number is 2".
// - If `a` is 3, it prints "Your Number is 3".
// If none of these cases match, the `default` case is executed, printing "Sorry No Match Found".
// The program ends without a return statement, which can be improved by adding `return 0;` for better structure.
