// Problem Statement: Write a C program that calculates the income tax based on the user's salary in Lakhs. 
// The tax rate is determined based on salary ranges:
// - Salary above 10 Lakhs: 30% tax
// - Salary above 5 Lakhs: 20% tax
// - Salary above 2.5 Lakhs: 5% tax
// - Salary below or equal to 2.5 Lakhs: No tax

#include <stdio.h>

int main(){
    float salary;
    printf("Enter your salary in terms of Lakhs\n");
    scanf("%f",&salary);
    if(salary>10.0){
        printf("You have to pay 30 percent tax");
    } else if(salary > 5.0){
        printf("You have to pay 20 percent tax");
    } else if(salary > 2.5){
        printf("You have to pay 5 percent tax");
    } else {
        printf("Enjoy!! No Tax");
    }
}

// Working of the Code:
// The program starts by declaring a float variable `salary` to store the user's salary input.
// The user is prompted to enter their salary in Lakhs using `printf` and the input is captured using `scanf`.
// A series of conditional statements (`if-else if-else`) checks the salary range:
// - If the salary is greater than 10 Lakhs, it prints "You have to pay 30 percent tax".
// - If the salary is between 5 and 10 Lakhs, it prints "You have to pay 20 percent tax".
// - If the salary is between 2.5 and 5 Lakhs, it prints "You have to pay 5 percent tax".
// - If the salary is 2.5 Lakhs or below, it prints "Enjoy!! No Tax".
// The program ends without a return statement, which can be improved by adding `return 0;` for proper termination.
