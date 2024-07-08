#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [100]={0};
    int x , ins , loc ,temp;

    printf("Enter no of elements : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);

    for(int i= 0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be inserted : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&ins);

    printf("Enter the location : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&loc);

    loc -- ;

    for(int i = x ; i > loc  ;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[loc]=ins ;

    for(int i = 0 ; i < x+1 ; i++)
    {
        printf("%d ",arr[i]);
    }
}
