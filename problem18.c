#include <stdio.h>

int main ()
{
    for (int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 1; i<=5; i++)
    {
        for(int j = i; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
