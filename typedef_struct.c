/*  
   Problem Statement: Demonstrating typedef with struct  
   - Using typedef to create an alias for a struct type.  
   - Shows how to use the new type name as an alias for struct.  
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    Person p1;

    strcpy(p1.name, "Nirant");
    p1.age = 22;
    p1.height = 5.9;

    printf("Person Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f feet\n", p1.height);

    return 0;
}

/*  
   Step-by-step working:  
   1. Define typedef for 'struct' as 'Person'.  
   2. Declare variable 'p1' of type 'Person'.  
   3. Assign values to 'p1' members (name, age, height).  
   4. Print the values of 'p1' members.  

   Explanation:  
   - 'typedef' creates an alias for the struct type.  
   - 'Person' is now treated as an alias for the struct type, simplifying declaration.  
*/
