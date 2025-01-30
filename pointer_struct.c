/*  
   Problem Statement: Exploring struct pointers in C  
   - Demonstrates struct pointers with and without the arrow (->) operator.  
   - Assigns values using a normal struct variable (not pointer).  
   - Prints values using both dot (.) and arrow (->) operators to show identical output.  
*/

#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];  
    int age;        
    float height;   
};

int main() {
    struct Person p1;
    struct Person *ptr;  

    ptr = &p1;  

    strcpy(p1.name, "Nirant");  
    p1.age = 22;                
    p1.height = 5.9;            

    printf("Person Details:\n");
    printf("Name: %s\n", ptr->name);   
    printf("Age: %d\n", p1.age);       
    printf("Height: %.1f feet\n", ptr->height); 

    return 0;
}

/*  
   Step-by-step working:  
   1. Define a struct 'Person' with three members.  
   2. Declare a struct variable 'p1'.  
   3. Declare a struct pointer 'ptr' and assign it the address of 'p1'.  
   4. Assign values directly using p1 (not using pointer).  
   5. Print values using a mix of p1.member and ptr->member.  
   6. Output is the same, proving both methods work.  

   Explanation:  
   - Assigning values directly to struct variable does not require a pointer.  
   - The arrow (->) operator accesses struct members via a pointer.  
   - Mixing both in printf() confirms that both approaches give the same result.  
*/
