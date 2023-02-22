#include <stdio.h>

int main ()
{
    int count = 1;
    int sum = 0, num;

    while (count <= 10)
    {
        printf("Enter the number %d: ", count);
        scanf("%d", &num);
        sum += num;
        count ++;
    }

    printf("The Sum is %d", sum);

    return 0;
}
