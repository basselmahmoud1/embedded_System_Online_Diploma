#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[2][2] , b[2][2] ,summ [2][2];
    printf("Enter elements of 1st matrix\n");
    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 2 ; j++)
        {
            printf("Enter a[%d][%d]: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of 2nd matrix\n");

    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 2 ; j++)
        {
            printf("Enter b[%d][%d]: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of Matrix: \n");

    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 2 ; j++)
        {
            printf("%0.2f\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }


}
