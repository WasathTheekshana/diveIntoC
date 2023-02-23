#include <stdio.h>

int main ()
{
    int num;

    while (1)
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        if(num != -1)
        {
            printf("True\n");
        }
        else {
            printf("False\n");
            break;
        }
    }

    return 0;
}
