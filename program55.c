//Check wheather the number is palindrome or not
//input: 151
//Output:151
//input: 16461
//Output:16461

#include<stdio.h>
#include<stdbool.h>

int ChkPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
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

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet=ChkPalindrome(iValue);
    if(bRet==true)
    {
        printf("%d is palindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a palindrome number \n",iValue);
    }

    return 0;
}