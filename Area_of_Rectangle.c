// Problem Statement: Write a C program to calculate and display the area of a rectangle. 
// The program should take the length and breadth as input from the user and use the formula area = length * breadth to compute the area.

#include<stdio.h>

int main(){
    int l;
    int b;
    scanf("%d",&l);
    scanf("%d",&b);
    int area;
    area = l * b;
    printf("The Area is %d",area);
    return 0;
}

// Working of the Code:
// The program begins by declaring two integer variables `l` (length) and `b` (breadth) to store the dimensions of the rectangle. 
// It also declares an integer variable `area` to store the calculated area.
// The user inputs the values of length and breadth using `scanf`.
// The formula for the area of a rectangle (length * breadth) is applied, and the result is stored in the `area` variable.
// The calculated area is then displayed on the console using `printf`.
// The program ends with a return value of 0, indicating successful execution.
