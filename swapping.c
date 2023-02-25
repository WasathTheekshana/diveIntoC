#include <stdio.h>
int main()
{
    int num1, num2, temp;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    //before the swap

    printf("%d\n", num1);
    printf("%d\n\n", num2);

    //swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    //after swapping

    printf("%d\n", num1);
    printf("%d", num2);

}
