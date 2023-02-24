#include <stdio.h>

int main ()
{
    int value, sum = 0;
    float avg;

    for (int i = 1; i<=10; i++)
    {
        printf("Enter the number %d : ", i);
        scanf("%d", &value);

        sum += value;
    }

    avg = (float)sum/10;

    printf("Sum is : %d\n", sum);
    printf("Average is : %.2f", avg);

}
