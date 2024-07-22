#include <stdio.h>
#include <stdlib.h>

void reverser ()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        reverser();
        printf("%c",c);
    }
}

int main()
{
    reverser();
}
