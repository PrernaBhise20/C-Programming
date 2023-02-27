//Accept number from user and return even digits of  that number
//Input: 721
//Output:2

#include<stdio.h>

int DisplayEven(int iNo)
{
    int iCnt=0;
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {   
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            printf("%d\n",iDigit);
        }
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
    return 0;
}
