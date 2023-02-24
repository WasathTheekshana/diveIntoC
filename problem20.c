#include <stdio.h>

int main()
{
   int arr[10];

   for(int i=0;i<10;i++)
   {
       printf("Enter a value for index %d: ",i);
       scanf("%d",&arr[i]);
   }

    printf("\nThe array is: ");

    for(int i=0;i<10;i++)
   {
       printf("%d ",arr[i]);

   }

}
