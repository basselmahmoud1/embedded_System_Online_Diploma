#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr [100] , sum=0 , avr=0;
    int i =0 ;

    printf("Enter the number of data: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&i);

    for(int j = 0 ; j < i ; j++ )
    {
        printf("Enter number: ");
        fflush(stdin);fflush(stdout);
        scanf("%f",&arr[j]);
        sum += arr[j];
    }

    avr = sum/i ;
    printf("\nAverage = %0.2f",avr);

}
