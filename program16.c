//Program to accept value from user and  display that many times Hello on screen with filter

#include<stdio.h>

//Demostration of ITERATION

void Display(int iNo)      //Defination
{
    int iCnt = 0;
    if(iNo<0)
    {
        printf("Please enter positive value\n");        //filter
        return;
    } 

    //     1      2      3
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("Hello\n");      //4
    }

}
int main()
{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    Display(iValue);      //Function call

    return 0;
}