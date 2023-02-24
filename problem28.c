#include <stdio.h>

//function
void fun1 ()
{
    for (int i = 1; i<=100; i++)
    {
        printf("%d\n" ,i);
    }
}

//main function
int main ()
{
    fun1(); //first call
    fun1(); //second call
    fun1(); //third call
}
