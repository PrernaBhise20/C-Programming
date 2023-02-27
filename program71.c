//Accept N numbers from user and count Even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt=0,iEvenCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter the number of elements tht you want:\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter values of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=CountEven(ptr,iSize);
    printf("Number of even elements are: %d\n",iRet);
    
    free(ptr);
    
    return 0;
}

/*
STEPS to solve problems on  N numbers

Step 1:     Accept the size of array from user                  (main)

Step 2:     Allocate the memory dinamically for that array      (main)

Step 3:     Accept the values from user and store in the array   (main)

Step 4:     Pass that array and size to the function(Logic)      (Helper Function)

Step 5:     Deallocate memory of that array                       (main)

*/