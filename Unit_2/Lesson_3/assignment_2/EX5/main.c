#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x ;
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&x);
    fflush(stdin);fflush(stdout);
    if ( ( x>=65 && x<=90 ) || ( x>=97 && x<=122 ))
    {
        printf("%c is an alphabet",x);
    }
    else
        printf("%c is not an alphabet",x);
}
