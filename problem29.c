#include <stdio.h>

void oddOrEven(int x)
{
    if(x % 2 == 0)
        printf("You entered an Even number");
    else if (x % 2 == 1)
        printf("You entered an Odd number");
}

int main ()
{
    int num;

    printf("Enter your number : ");
    scanf("%d", &num);

    oddOrEven(num);

}
