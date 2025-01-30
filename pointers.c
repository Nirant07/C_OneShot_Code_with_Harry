/*  
   Problem Statement: Exploring the working of pointers in C  
   - This program demonstrates how pointers store and access the memory address of a variable.  
   - We declare an integer variable and a pointer that stores its address.  
   - We print the value of the integer, its memory address, and how a pointer can access it.  
*/
#include<stdio.h>

int main(){
    int i = 72;
    int *j = &i;
    printf("The value is %d\n",i);
    printf("The value is %p\n",&i);
    printf("The value is %p\n",j);
    printf("The value is %d\n",*j);
}


// Step-by-step working of the code:
// 1. An integer variable 'i' is declared and assigned the value 72.
// 2. A pointer variable 'j' is declared to store the address of 'i'.
// 3. The value of 'i' is printed using %d, which is used for integers.
// 4. The address of 'i' is printed using %p, which is used for pointer addresses. 
//    - We cast the address to (void*) to avoid compiler warnings in some cases.
// 5. The pointer variable 'j' stores the address of 'i', which is also printed using %p.
// 6. The value stored at the address in 'j' (which is 'i') is accessed using *j and printed using %d.

// Explanation of format specifiers (%p and %d):
// - %d: Used to print integer values. Example: printf("%d", i);
// - %p: Used to print memory addresses (pointers). Example: printf("%p", (void*)&i);
// - Memory addresses are typically displayed in hexadecimal format when printed using %p.

// Pointer usage for different data types:
// - int *ptr;   // Pointer to an integer
// - char *ptr;  // Pointer to a character
// - float *ptr; // Pointer to a float

// Example:
// char c = 'A';
// char *p = &c;   // Pointer to char
// float f = 3.14;
// float *q = &f;  // Pointer to float

// Each pointer type should match the data type it points to, ensuring correct memory access and dereferencing.