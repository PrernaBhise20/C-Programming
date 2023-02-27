//Accept N numbers from user also accept one more number and search that number in array return the index of the number  

#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }

    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    auto int iSize=0,iCnt=0,iValue=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(sizeof(int)*iSize);


    printf("Enter the values:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search:\n");
    scanf("%d",&iValue);

    iRet=SearchFirstOccurence(ptr,iSize,iValue);

    if(iRet==-1)
    {
        printf("Elements is not present \n");
    }
    else
    {
        printf("Element first occured at :%d\n",iRet);
    }

    return 0;
}