//Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
        return 0;
    }

    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Categorize roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    } 
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root1 = %.2f + %.2fi, Root2 = %.2f - %.2fi\n", 
                realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}