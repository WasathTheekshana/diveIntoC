#include<stdio.h>

int main()
{
    int arr[10];
    int counter=1,total=0;
    float average;

    for(int i=0;i<10;i++)
    {
        printf("Marks of student %d: ",counter);
        scanf("%d",&arr[i]);

        counter++;
        total+=arr[i];
    }

    average=(float)total/10;

    printf("\nThe sum is %d\n",total);
    printf("The average is %.2f",average);

}



