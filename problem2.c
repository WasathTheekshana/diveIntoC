#include <stdio.h>

int main ()
{
     int favNum;
     char favLetter;

     printf("Enter your favorite number: ");
     scanf("%d", &favNum);

     printf("Enter your favorite letter: ");
     scanf(" %c", &favLetter);

     printf("Favorite number is: %d \n", favNum);
     printf("Favorite letter is: %c ", favLetter);

    return 0;
}
