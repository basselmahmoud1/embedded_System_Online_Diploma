#include <stdio.h>
#include <stdlib.h>


int po (int base ,int power)
{
    if(power==0)
        return 1 ;
    return base*po(base,power-1);
}

int main()
{
    int power , base ;
    printf("Enter base no :");
    scanf("%d",&base);
    printf("Enter power no :");
    scanf("%d",&power);

    printf("%d^%d=%d",base,power,po(base,power));
}
