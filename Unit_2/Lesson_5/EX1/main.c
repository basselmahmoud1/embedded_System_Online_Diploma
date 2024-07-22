#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime (int x)
{
    int i;
    for( i = 2 ; i <= sqrt(x) ; i++)
    {
        if (x%i == 0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int x,y,i;

    printf("Enter two numbers :");
    fflush(stdin);fflush(stdout);

    scanf("%d%d",&x,&y);

    printf("prime numbers between %d and %d are : ",x,y);
    for(i=x;i<=y;i++)
    {
        if(isprime(i))
        {
            printf("%d ",i);
        }
    }
}
