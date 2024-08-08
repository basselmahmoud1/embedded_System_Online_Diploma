#include <stdio.h>
#include <stdlib.h>

struct info {
    char name [200];
    int roll ;
    float mark ;
};

int main()
{
    struct info student_1 ;
    printf("Enter name :");
    fflush(stdin); fflush(stdout);
    scanf ("%s",student_1.name);
    printf("Enter roll :");
    fflush(stdin); fflush(stdout);
    scanf ("%d",&student_1.roll);
    printf("Enter marks :");
    fflush(stdin); fflush(stdout);
    scanf ("%f",&student_1.mark);

    printf("Displaying info : \n");
    printf("name : %s \n",student_1.name);
    printf("roll : %d\n",student_1.roll);
    printf("marks : %.02f \n",student_1.mark);
}
