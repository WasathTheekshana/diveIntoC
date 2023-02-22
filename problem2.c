#include <stdio.h>

int main ()
{
     int favNum;
     char favLetter;

     printf("Enter your favorite number: ");
     scanf("%d", &favNum);

     printf("Enter your favorite letter: ");
     scanf(" %c", &favLetter);

    return 0;
}
