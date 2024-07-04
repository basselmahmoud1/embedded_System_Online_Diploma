#include <stdio.h>
#include <stdlib.h>

long fact (int n);

int main()
{
    long x ;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    fflush(stdin);fflush(stdout);
    if (x<=0)
        printf("Error!!! Factorial of negative number doesn't exist");
    else
        printf("Factorial = %ld",fact(x));
}

long fact (int n)
{
    if(n==1)
        return 1 ;
     return n*fact(n-1);
}
