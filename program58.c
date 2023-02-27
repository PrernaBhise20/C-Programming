//Accept two numbers from user as A and B and return the result as A raised to B
//input: 2  4
//Output: 16        2*2*2*2

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2)
{
    ULONG lMult=1;
    register int iCnt=0;

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMult=lMult*iNo1;
    }
    return lMult;
}
int main()
{
    auto int iValue1=0,iValue2=0;
    auto ULONG lRet=0;

    printf("Enter base: \n");
    scanf("%d",&iValue1);

    printf("Enter power: \n");
    scanf("%d",&iValue2);

    lRet=Power(iValue1,iValue2);
    printf("%d raised to %d is: %ld\n",iValue1,iValue2,lRet);

    return 0;
}

/*
START

Accept one number as no1
Accept another number as no2

Create one variable as mult
set the value 1 in the variable mult

create one counter as cnt
set the counter to 1

Iterate till the counter is less than or equal to no2
mult=mult*no1
increment the counter by 1

Goto LOOP

Display the value of mult

End


no1=2
no2=4
mult=1

mult=mult*no1
mult=mult*no1
mult=mult*no1
mult=mult*no1

for(iCnt=1;iCnt<=iNo2;iCnt++)
{
    mult=mult*no1;
}
*/