#include <stdio.h>
#include <stdlib.h>

struct info {
    char name [200];
    int roll ;
    float mark ;
};

int main()
{
    struct info student [10];
    int i ;
    for (i = 0 ; i < 10 ; i++ )
    {
        printf("Enter name :");
        fflush(stdin); fflush(stdout);
        scanf ("%s",student[i].name);
        printf("Enter roll :");
        fflush(stdin); fflush(stdout);
        scanf ("%d",&student[i].roll);
        printf("Enter marks :");
        fflush(stdin); fflush(stdout);
        scanf ("%f",&student[i].mark);

    }
    printf("\n\n\n");
    for (i = 0 ; i < 10 ; i++ )
    {
        printf("Displaying info : \n");
        printf("name : %s \n",student[i].name);
        printf("roll : %d\n",student[i].roll);
        printf("marks : %.02f \n",student[i].mark);

    }
}
