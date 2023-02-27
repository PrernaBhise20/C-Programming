//Accept N numbers from user and return largest number from that numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iMax=0,iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    auto int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(sizeof(int)*iSize);


    printf("Enter the values:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Maximum(ptr,iSize);

    printf("Maximum number is %d\n",iRet);

    free(ptr);

    return 0;
}

/* program74.c is improved */