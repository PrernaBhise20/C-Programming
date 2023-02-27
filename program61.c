//Check wheather the number is armstrong or not
// 1634    //(1**4+6**4+3**4+4**4)     //1+1296+81+256=1634

#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
    int iTemp=0,iCnt=0,iMult=1;
    int iDigCnt=0, iDigit=0,iSum=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;

    //Calculate number of digits
    while(iNo!=0)
    {
        iDigCnt++;
        iNo=iNo/10;
    }

    iNo=iTemp;

    while(iNo!=0)
    {
        iMult=1;
        iDigit=iNo%10;

        for(iCnt=1;iCnt<=iDigCnt;iCnt++)
        {
            iMult=iMult*iDigit;
        }

        iSum=iSum+iMult;
        iNo=iNo/10;
    }

    if(iSum==iTemp)
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

    bRet=ChkArmstrong(iValue);

    if(bRet==true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }
    return 0;
}

/*things to read 
Array
Array and pointer
Dynamic memory allocation
malloc
free
loops
for loop
