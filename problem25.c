#include <stdio.h>

int main()
{
   int arr[3][2];

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<2;j++)
       {
           printf("Enter a value for arr[%d][%d]: ",i,j);
           scanf("%d",&arr[i][j]);
       }
   }

   printf("\nThe array is\n");

    for(int i=0;i<3;i++)
   {
       for(int j=0;j<2;j++)
       {
          printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
}
