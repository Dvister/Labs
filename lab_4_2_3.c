#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    int s = 0;

    do{
        if (i >= 1)
        {
            i=pow(i,2);
            s += i;
        }
        i++;
    }while(i < 20);
    printf("Sum = %d ",s);
}