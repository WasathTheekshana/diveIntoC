#include <stdio.h>

int main ()
{
    float num1, num2;
    float sum, sub, mul, div;
    int operaion;

    while (1)
    {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        printf("\n*Select the operation by entering the number*\n\n");
        printf("1 - Addition (+)\n2 - Subtraction (-)\n3 - Multiplication (x)\n4 - Division (/)\n Enter -1 to exit\n\n");
        scanf("%d", &operaion);

        if(operaion == 1)
        {
            sum = num1 + num2;
            printf("Sum is %.2f\n\n", sum);
        }
        else if(operaion == 2)
        {
            sub = num1 - num2;
            printf("Sub is %.2f\n\n", sub);
        }
        else if(operaion == 3)
        {
            mul = num1 * num2;
            printf("Multiplication is %.2f\n\n", mul);
        }
        else if(operaion == 4)
        {
            div = num1 / num2;
            printf("Division is %.2f\n\n", div);
        }
        else if (operaion == -1)
            break;
        else
            printf("Enter a valid number!\n\n");

    }

    return 0;
}
