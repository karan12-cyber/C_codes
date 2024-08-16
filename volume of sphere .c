#include<stdio.h>
int main()
{     //volume of sphere is = 4/3*pi*radius^3
	float radius=5,pi=3.14159265359;
	 float volume = 4.0/3.0*pi*radius*radius*radius;
	printf("%f",volume);
	 return 0;
}


//#include <stdio.h>
//
//// Function to calculate the volume of a sphere
//float calculateSphereVolume(float radius) {
//    float volume = (4.0 / 3.0) * 3.141592653589793 * radius * radius * radius;
//    return volume;
//}
//
//int main() {
//    // Declare variables
//    float radius, volume;
//
//    // Get the radius from the user
//    printf("Enter the radius of the sphere: ");
//    scanf("%f", &radius);
//
//    // Check if the radius is non-negative
//    if (radius < 0) {
//        printf("Radius cannot be negative. Please enter a non-negative value.\n");
//        return 1; // Exit the program with an error code
//    }
//
//    // Calculate the volume
//    volume = calculateSphereVolume(radius);
//
//    // Display the result
//    printf("The volume of the sphere with radius %.2f is: %.2f\n", radius, volume);
//
//    return 0; // Exit the program successfully
//}

