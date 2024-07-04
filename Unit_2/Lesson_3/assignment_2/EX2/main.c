#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr [5] = {'a','e','i','u','o'};
    char x ;
    int flag;
    printf("Enter an alphabet: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&x);
    for(int i=0 ; i<5 ;i++)
    {
        if(arr[i]==x)
        {
            printf("%c is vowel",x);
            return 0;
        }
    }
    printf("%c is consonant",x);
}
