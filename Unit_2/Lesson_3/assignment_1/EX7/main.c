#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&b);

    a = a+b ;
    b = a-b ;
    a = a-b ;

    printf("\nAfter swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f",b);

}
