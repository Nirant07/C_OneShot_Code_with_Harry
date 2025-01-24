// Problem Statement: Write a C program to calculate the volume of a cylinder. 
// The program should take two inputs: the radius (`r`) of the base and the height (`h`) of the cylinder, 
// and then calculate the volume using the formula: Volume = π * r² * h.

#include<stdio.h>

int main(){
    int r;
    int h;
    scanf("%d",&r);
    scanf("%d",&h);
    float area;
    area = 3.14 * r * r;  // Calculate the area of the base of the cylinder (π * r²)
    float volume;
    volume = area * h;  // Calculate the volume of the cylinder (area * height)
    printf("The volume of cylinder is %f",volume);  // Output the volume
    return 0;
}

// Working of the Code:
// The program starts by declaring two integer variables `r` and `h` to store the radius and height of the cylinder.
// The user inputs the values for `r` and `h` using `scanf`.
// The area of the base of the cylinder is calculated using the formula π * r², and stored in the `area` variable.
// The volume of the cylinder is calculated by multiplying the base area by the height and stored in the `volume` variable.
// Finally, the program prints the volume of the cylinder using `printf`.
// The program ends with `return 0;` for successful execution.
