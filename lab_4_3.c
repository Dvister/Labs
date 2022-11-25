#include <stdio.h>

int main()
{
    int s = 0;
    int jj = 1;
    for (int i = 1; i <=5; i++)
    {
        i += i;
        for(int j = 1; j<=i; j++)
        {
            jj += j;
            printf("\t%d",jj);
            s = (i - jj);
        } 
    }
    printf("Result: %d",s);
}