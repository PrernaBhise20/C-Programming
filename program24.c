//write a program to check whether given number is divisible by 5 & 3

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(
        ((iNo%5)==0)&&
        ((iNo%3)==0)
      )
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
    bool bRet=false;      

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    if(bRet==true)
    {
        printf("%d is divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 & 5\n",iValue);
    }

    return 0;

}