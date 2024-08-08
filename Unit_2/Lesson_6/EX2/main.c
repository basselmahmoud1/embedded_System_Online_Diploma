#include <stdio.h>
#include <stdlib.h>

struct distance {
    int feet ;
    float inch ;
};

int main()
{

    struct distance measure[3] ;
//    int counter ;
    printf("Enter info of first reading: \n");
    fflush(stdin); fflush(stdout);
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf ("%d",&measure[0].feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf ("%f",&measure[0].inch);


    printf("Enter info of second reading: \n");
    fflush(stdin); fflush(stdout);
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf ("%d",&measure[1].feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf ("%f",&measure[1].inch);

    measure[2].feet = measure[1].feet + measure[0].feet;

    measure[2].inch = measure[1].inch + measure[0].inch;

    while (measure[2].inch >= 12)
    {
        measure[2].feet++;

        measure[2].inch -= 12 ;
    }

    printf("sum of distances = %d'-%.02f\" ",measure[2].feet,measure[2].inch);
}
