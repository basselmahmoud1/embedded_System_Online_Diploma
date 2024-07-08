#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{
   char arr[100] ,len=0,temp=0;
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len/2 ;i++)
    {
        temp  = arr[i];
        arr[i]= arr[len-i-1] ;
        arr[len-i-1]=temp;
    }

    printf("Reverse string is: %s",arr);
}
