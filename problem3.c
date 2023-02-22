#include <stdio.h>

int main ()
{
    int num1, num2, temp;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    //Before Swapping
    printf("Number 1 = %d \nNumber 2 = %d\n", num1, num2);

    //Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    //After Swapping
    printf("\nNumber 1 : %d \nNumber 2 : %d", num1, num2);

    return 0;
}
