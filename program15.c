//Program to accept value from user and  display that many times Hello on screen

#include<stdio.h>

//Demostration of ITERATION

void Display(int iNo)      //Defination
{
    int iCnt = 0; 

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