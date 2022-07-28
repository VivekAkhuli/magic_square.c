#include<stdio.h>
int a[50][50];
int main()
{
    int i,row,col,n,sum;
    printf("enter the odd number of dimension of the matrix < 50 : ");
    scanf("%d",&n);

    sum=n*(n*n+1)/2;
    printf("the sum of each row,col and diagonal is = %d ",sum);

    row=1;
    col=(n+1)/2;

    for(i=1;i<=n*n;i++)
    {
        a[row][col]=i;
        row--;
        col++;

        if(row<1 && col>n)
        {
            row=row+2;
            col--;
        }
        else if(row<1)
            row=n;
        else if(col>n)
            col=1;
        else if(a[row][col]!=0)
        {
            row=row+2;
            col--;
        }
    }
    for(row=1;row<=n;row++)
    {
        printf("\n\t\t");
        for(col=1;col<=n;col++)
        {
            printf("%4d",a[row][col]);
        }
    }
}