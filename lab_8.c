#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void array()
{

    int max = 100,min = -100,
    a = 0;
    int size,sum = 0,
    arr[10];
    srand(time(0));
    printf("Enter the size of array ");
    scanf("%d",&size);

    for(int i = 0; i < size; i++)
    {
        arr[i] = a = rand()%(min + 1 - max ) + min;;
        printf("\t%d",arr[i]);
        if((arr[i]%2)==0)
        {
            sum += arr[i];
        }
    }
    
    printf("\nThe sum is %d\n",sum);
}

int main()
{
    array();
}