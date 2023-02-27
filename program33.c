//Check wheather number is perfect numbernor not
//Perfect Number: Summation of the factors is equal to the Number entered
//input:6
//factors:1,2,3
//output: 6


#include<stdio.h>
#include<stdbool.h>

int FactorAddition(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }   
    }
    return iSum;
}

bool CheckPerfect(int iNo)
{
    int iAns=0;
    iAns=FactorAddition(iNo);
    if(iAns==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue=0;
    bool bRet;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}

//A     B       C
//C     B       A