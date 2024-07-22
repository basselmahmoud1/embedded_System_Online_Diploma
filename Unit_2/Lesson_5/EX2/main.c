#include <stdio.h>
#include <stdlib.h>

int fact (int x)
{

    if(x==1)
        return 1;
    else
        return fact(x-1)*x;

}

int main()
{
    int x ;
    printf("Enter a positve number : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&x);
    printf("factorial of %d = %d",x,fact(x));

}
