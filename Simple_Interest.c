// Problem Statement: Write a C program to calculate the simple interest. 
// The program should take three inputs: principal amount (p), rate of interest (r), and time in years (t), and use the formula SI = (p * r * t) / 100 to compute the simple interest.

#include<stdio.h>

int main(){
    int p, r, t;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    float si;
    si = (p * r * t) / 100;
    printf("The simple interest is %f",si);
}

// Working of the Code:
// The program begins by declaring three integer variables `p`, `r`, and `t` to store the principal amount, rate of interest, and time in years, respectively.
// The user inputs the values for these variables using `scanf`.
// The formula for simple interest, SI = (p * r * t) / 100, is applied, and the result is stored in the float variable `si`.
// The calculated simple interest is then displayed using `printf`.
// The program ends without a return statement, which can be improved by adding `return 0;` for proper termination and clarity.
