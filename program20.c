//program to display 1 to 5 on screen
// Output 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)   //updater
    {
        iNo=-iNo;
    }
    //     1     2       3
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);    //4
    }
}

int main()
{
    int iValue=0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}