/*  
   Problem Statement: Demonstrating typedef with int  
   - Using typedef to create an alias for the int data type.  
   - Shows how to use the new type name as an alias for int.  
*/

#include <stdio.h>

typedef int MyInt;

int main() {
    MyInt a = 10;
    MyInt b = 20;

    MyInt sum = a + b;

    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}

/*  
   Step-by-step working:  
   1. Define typedef for 'int' as 'MyInt'.  
   2. Declare variables 'a', 'b', and 'sum' using 'MyInt' as type.  
   3. Assign values to 'a' and 'b', and calculate the sum.  
   4. Print the sum using the newly defined type.  

   Explanation:  
   - 'typedef' creates an alias for an existing data type.  
   - 'MyInt' is now treated as an alias for 'int', making the code more readable.  
*/
