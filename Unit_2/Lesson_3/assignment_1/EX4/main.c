#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x =0 , y=0 ;
    printf("Enter two numbers: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f",&x,&y);
    printf("sum: %f ",x*y);
}
