#include <stdio.h>

int main()
{
   int arr1[2][2] = {10,20,30,40};
   int arr2[2][2] = {11,22,33,44};
   int arr3[2][2];

   for(int i=0;i<2;i++)
   {
       for(int j=0;j<2;j++)
       {
        arr3[i][j]=arr1[i][j]+arr2[i][j];
       }
   }

   printf("\nThe array is\n");

    for(int i=0;i<2;i++)
   {
       for(int j=0;j<2;j++)
       {
          printf(" %d",arr3[i][j]);
       }
       printf("\n");
   }
}
