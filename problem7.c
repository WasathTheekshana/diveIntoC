#include <stdio.h>

int main ()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 75 && marks <= 100)
        printf("A");
    else if (marks >= 65)
        printf("B");
    else if (marks >= 50)
        printf("C");
    else
        printf("F");

    return 0;
}
