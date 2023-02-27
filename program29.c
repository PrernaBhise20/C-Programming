//Accept number from user and display its factors with updater
//Input :   10
//output : 1  2  5

//Input :  9
//output : 1  3

//Input :  17 
//output : 1  

//Input :  20 
//output : 1 2 4 5 10

//Input :  -20
//output : 1 2 4 5 10

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

//Time Complexity : N