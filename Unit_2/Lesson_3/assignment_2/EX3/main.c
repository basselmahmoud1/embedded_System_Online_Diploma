#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Enter three numbers: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f %f",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("Largest number = %0.2f",x);
        else
            printf("Largest number = %0.2f",z);
    }
    else if (y>z)
    {
        printf("Largest number = %0.2f",y);
    }
    else
        printf("Largest number = %0.2f",z);


}
