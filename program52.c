//Accept number from user and return addition of even digits of  that number
//Input: 7214
//Output:6      (2+4)

#include<stdio.h>

int SumEven(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {   
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSum=iSum+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=SumEven(iValue);
    printf("Summation of even digits are:%d\n",iRet);
    return 0;
}
