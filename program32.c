//Accept number from user and display addition of its factors 
//Input :   10
//factors : 1  2  5
//addition: 8

//Input :  9
//output : 1  3
//addition: 4

//Input :  20 
//output : 1 2 4 5 10
//addition: 22

//Input :  -20
//output : 1 2 4 5 10
//addition: 22

#include<stdio.h>
int FactorAddition(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }   
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=FactorAddition(iValue);
    printf("Addition is: %d \n",iRet);

    return 0;
}