// Problem Statement: Write a C program to calculate and display the area of a circle. 
// The program should take the radius as input from the user and use the formula area = π * r * r to compute the area.

#include<stdio.h>

int main(){
    int r;
    scanf("%d",&r);
    float area;
    area = 3.14 * r * r;
    printf("The area of circle is %f",area);
    return 0;
}

// Working of the Code:
// The program starts by declaring an integer variable `r` to store the radius of the circle and a float variable `area` for the computed area.
// It reads the radius input from the user using `scanf`.
// The formula for the area of a circle (π * r * r) is applied, where π is approximated to 3.14.
// The calculated area is then displayed using `printf`.
// The program ends with a return value of 0, indicating successful execution.
