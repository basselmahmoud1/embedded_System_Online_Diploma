#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i=0 , summ = 0 ;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    fflush(stdin);fflush(stdout);

    do
    {
        i++;
        summ += i ;
    }while( i != x);

    printf("Summ = %d",summ);
}
