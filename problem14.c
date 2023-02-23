#include <stdio.h>

int main ()
{
    int marks, passC;
    int counter = 1;

    do
    {
        printf("Marks of student %d : ", counter);
        scanf("%d", &marks);

        if(marks >= 50)
        {
            passC ++;
        }

        counter ++;

    }while (counter <= 10);

    printf("Pass count is %d", passC);

    return 0;
}
