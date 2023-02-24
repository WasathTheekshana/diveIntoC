#include <stdio.h>

int oddEven()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        return 1;
    else if (num % 2 == 1)
        return 0;
}

int main ()
{
    if(oddEven() == 1)
        printf("Even Number");
    else
        printf("Odd Number");
}
