//Input:  Row = 6    Columns =  6
/* 
    * * * * * *
    * * $ $ $ *
    * & * $ $ *
    * & & * $ *
    * & & & * *
    * * * * * *
*/
//Complexity O(N**2)
//time reducing code 
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;void Display(int iRow,int iCol)
{
    int i=0,j=0;
    if(iRow != iCol)
    {
        return;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
            {
                printf("*\t");
            }
            else
            {
                if (i>j)
                {
                    printf("&\t");
                
                }
                else if(i<j) 
                {
                    printf("$\t");
                }
            }
        } printf("\n");
    }
}
    if(iRow != iCol)
    {
        return;
    }
    for(i=1;i<=iCol;i++)
    {
        for(j=1;j<=iRow;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
            {
                printf("*\t");
            }
            else if (i<j)
            {
                printf("$\t");
            
            }
            else 
            {
                printf("&\t");
            }
        } printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);
    printf("Enter number of columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}