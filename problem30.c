#include <stdio.h>

int sumAndAvg(float x, float y)
{
    float sum = x + y;
    float avg = (x + y)/2;

    printf("Sum is : %.2f\n", sum);
    printf("Average is %.2f", avg);
}

int main ()
{
    float num1, num2;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    sumAndAvg(num1, num2);
}
