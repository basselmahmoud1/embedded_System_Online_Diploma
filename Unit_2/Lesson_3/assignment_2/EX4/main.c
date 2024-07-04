#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&x);
    fflush(stdin);fflush(stdout);
    if(x>0)
        printf("%.2f is positive",x);
    else if (x==0)
        printf("You entered zero");
    else if (x<0)
        printf("%.2f is negative",x);
}
