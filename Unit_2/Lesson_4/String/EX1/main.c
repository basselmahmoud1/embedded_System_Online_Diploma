#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{
    char arr[500]={0} ,req,freq=0;
    printf("Enter a string: ");
    gets(arr);
    fflush(stdin);fflush(stdout);
    strlwr(arr);



    printf("Enter a character to find frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&req);

    for(int i=0;i<=500;i++)
    {
        if(req==arr[i])
            freq++;

    }
    printf("Frequency of %c = %d",req,freq);


}
