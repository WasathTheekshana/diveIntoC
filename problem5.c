#include <stdio.h>

int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 7)
        printf("True");
    else
        printf("False");

    return 0;
}
