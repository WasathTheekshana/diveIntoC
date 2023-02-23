#include<stdio.h>

int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={11,22,33,44,55};
    int arr3[5];

    for(int i=0;i<5;i++)
    {
      arr3[i]=arr1[i]+arr2[i];
    }

    for(int i=0;i<5;i++)
    {
      printf("%d ",arr3[i]);
    }

}



