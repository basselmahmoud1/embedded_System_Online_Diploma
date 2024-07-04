#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,res ;
    char op ;

    printf("Enter operator either + or - or * or divide: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&op);
    fflush(stdin);fflush(stdout);
    printf("Enter two operands: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f",&x,&y);
    switch(op)
    {
        case '+' : res = x + y ; break;
        case '-' : res = x - y ; break;
        case '/' : res = x / y ; break;
        case '*' : res = x * y ; break;
    }
    printf("%0.1f %c %0.1f = %0.1f",x,op,y,res);
}
