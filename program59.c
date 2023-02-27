#include"header59.h"

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
//gcc program59.c helper59.c -o myexe 