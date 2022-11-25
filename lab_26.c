#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i,j;
    int max = 100, min = -100;
    int a[100][100];
    printf("Enter numbers of the row and column");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            a[i][j] = rand() % (min + 1 - max) + min;
            printf("\ta[%d][%d]=%d",i,j,a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        int row;
        int sum=0;
        for(j=1;j<=m;j++)
        {
            row = a[i][j];
            sum=sum+a[i][j];
        }
        if (sum > a[i][j])
        {
        printf("\v\ta[%d]",i);
        printf("%d",sum);
        }
    }
}