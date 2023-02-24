#include <stdio.h>

int oddEven(int x)
{
    if (x % 2 == 0)
        return 1;
    else if (x % 2 == 1)
        return 0;
}

int main ()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(oddEven(num) == 1)
        printf("Even Number");
    else if (oddEven(num) == 0)
        printf("Odd Number");
}
