//Accept number from user and return number of digits from that number
//Input: 7856
//Output:4

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("Number of digits :%d\n",iRet);

    return 0;
}


//O(N)=number of inputs