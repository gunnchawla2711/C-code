//Write a program to input two numbers and display their sum, difference, product, and quotient//
#include<stdio.h>

int main()
{
    float a,b,sum,difference,product,quotient;
    printf ("Enter the value of a and b");
    scanf("%f %f" &a, &b);

    sum=a+b;
    difference=a-b;
    product=a*b;
    if (b !=0){

        quotient = a/b ;
        printf("\nquotient: %.2f" ,quotient);
    
    } else {
        printf(
            "\nDivision by zero is not allowed");
        }
        printf ("\nsum: %.2f , sum);
        printf("\ndifference: %.2f" ,difference);
        printf("\nproduct: %.2f", product);

        return 0;
    }
}
        
        










