#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100] ,len=0;
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s",arr);
    for(int i =0 ; arr[i]!='\0' ; i++)
        len++;
    printf("Length of string: %d",len);
}
