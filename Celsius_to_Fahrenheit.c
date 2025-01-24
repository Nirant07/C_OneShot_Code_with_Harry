// Problem Statement: Write a C program to convert a temperature from Celsius to Fahrenheit. 
// The program should take the temperature in Celsius as input and use the formula Fahrenheit = (9 * Celsius) / 5 + 32 to perform the conversion.

#include<stdio.h>

int main(){
    float c;
    scanf("%f",&c);
    float f;
    f = ((9*c)/5)+32;
    printf("The Temperature in Fahrenheit is %f",f);
}

// Working of the Code:
// The program starts by declaring two float variables, `c` for the temperature in Celsius and `f` for the calculated temperature in Fahrenheit.
// The user inputs the temperature in Celsius using `scanf`.
// The formula for converting Celsius to Fahrenheit, i.e., Fahrenheit = (9 * Celsius) / 5 + 32, is applied, and the result is stored in the variable `f`.
// The calculated temperature in Fahrenheit is then displayed using `printf`.
// The program ends without a return statement, which is valid in modern C but could be improved by adding `return 0;` for clarity and convention.
