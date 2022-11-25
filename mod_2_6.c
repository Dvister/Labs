#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int randomFn();
void * createArr();

int main()
{
    createArr();
}

int randomFn()
{
    int max = 100,min = -100,
    a = 0;
    a = rand()%(min + 1 - max ) + min;
    return a;
}

void * createArr()
{
    srand(time(0));
    static int array[100][100];
    int maximum = array[0][0];
    int minimum = array[0][0];
    int arithmetic;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j]=randomFn();
            if (array[i][j] > maximum)
            {
                maximum = array[i][j];
            }
            if (array[i][j] < minimum)
            {
                minimum = array[i][j];
            }
            printf("\ta[%d][%d]=%d",i,j,array[i][j]);
            printf("\n");
        }
    }
    arithmetic =  maximum + minimum / 2;
    printf("The Min is %d and Max is %d",minimum,maximum);
    printf("The Arithmetic value is %d",arithmetic);
    return array;
}