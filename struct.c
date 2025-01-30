/*  
   Problem Statement: Exploring the struct data type in C  
   - Defines a struct 'Person' with name, age, and height.  
   - Declares and initializes a struct variable.  
   - Accesses members using the dot (.) operator.  
*/

#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];  // Stores the person's name  
    int age;        // Stores the person's age  
    float height;   // Stores the person's height  
};

int main() {
    struct Person p1;
    
    strcpy(p1.name, "Nirant");  // Assign name  
    p1.age = 22;                // Assign age  
    p1.height = 5.9;            // Assign height  

    printf("Person Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f feet\n", p1.height);

    return 0;
}

/*  
   Step-by-step working:  
   1. Define a struct 'Person' with three members.  
   2. Declare a struct variable 'p1'.  
   3. Assign values to 'p1' using dot (.) operator.  
   4. Print the struct members using printf().  

   Explanation:  
   - Structs group different data types under one name.  
   - The dot (.) operator accesses struct members.  
   - strcpy() assigns a string to the name attribute.  
*/
