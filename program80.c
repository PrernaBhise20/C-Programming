//Accept N numbers from user also accept one more number and search that number in array return the index of the number  

#include<stdio.h>
#include<stdlib.h>

int SearchLastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    for(iCnt=iLength-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    return iCnt;
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

    iRet=SearchLastOccurence(ptr,iSize,iValue);

    if(iRet==-1)
    {
        printf("There is no such element in array \n");
    }
    else
    {
        printf("Element Last occured at :%d\n",iRet);
    }

    return 0;
}