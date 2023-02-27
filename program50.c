//Accept number from user and return summation of digits from that number
//Input: 721
//Output:10  (7+2+1)

#include<stdio.h>

int SumDigits(int iNo)
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
        iSum=iSum+iDigit;
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

    iRet=SumDigits(iValue);

    printf("Summation of digits :%d\n",iRet);

    return 0;
}


//O(N)=number of inputs