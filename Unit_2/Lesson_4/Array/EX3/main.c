#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100][100] , row=0 , col=0 ;

    printf("Enter rows and column of matrix: ");
    fflush(stdin);fflush(stdout);
    scanf("%d%d",&row,&col);

    printf("Enter elements of 1st matrix\n");
    for(int i=0 ; i < row ; i++)
    {
        for(int j=0 ; j < col ; j++)
        {
            printf("Enter a[%d][%d]: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Entered Matrix:\n");
    for(int i=0 ; i < row ; i++)
    {
        for(int j=0 ; j < col ; j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }

    printf("Transpose of Matrix:\n");

    for(int i=0 ; i < col ; i++)
    {
        for(int j=0 ; j < row ; j++)
        {
            printf("%d\t",arr[j][i]);

        }
        printf("\n");
    }

}
