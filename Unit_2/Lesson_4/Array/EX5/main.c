#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,targ;
    int arr[100];

    printf("Enter no of elements : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);

    for(int i= 0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&targ);

    for(int i=0 ; i<x ; i++)
    {
        if(arr[i]==targ)
        {
            printf("Number found at the location = %d",i+1);
            break;
        }

    }

}
