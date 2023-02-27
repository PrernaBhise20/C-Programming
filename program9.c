//Write a program to perform addition of 2 numbers

#include"header9.h"

int Addition(int,int);

/////////////////////////////////////////////////////
//Write a program to perform addition of 2 numbers
////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    iNo3=Addition(iNo1,iNo2);
    printf("Additon is : %d\n",iNo3);

    return 0;
}

//gcc header9.c program9.c library9.c -o program9
