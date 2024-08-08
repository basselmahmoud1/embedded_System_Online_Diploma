#include <stdio.h>
#include <stdlib.h>

struct complex {
    float real ;
    float img ;
};


int main()
{
    struct complex num [2];
    printf("Enter info of first no: \n");
    fflush(stdin); fflush(stdout);
    printf("Enter real and imaginary respectively: ");
    fflush(stdin); fflush(stdout);
    scanf ("%f%f",&num[0].real,&num[0].img);
    printf("Enter info of second no: \n");
    fflush(stdin); fflush(stdout);
    printf("Enter real and imaginary respectively: ");
    fflush(stdin); fflush(stdout);
    scanf ("%f%f",&num[1].real,&num[1].img);

    printf("sum = %f + %f i ",num[1].real+num[0].real,num[0].img+num[1].img);


}
