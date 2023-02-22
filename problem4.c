#include <stdio.h>

int main ()
{
    int subject1;
    int subject2;
    int subject3;
    float average;


    //Getting user inputs
    printf("Enter marks of Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &subject3);

    //Operation
    average = (float)(subject1 + subject2 + subject3) / 3;

    printf("Average is : %.2f", average);

    return 0;
}
