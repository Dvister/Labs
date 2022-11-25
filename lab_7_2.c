#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

int randomFn();

int * createArray();

int * negDob(int array[]);

int * sumElem (int array[]);
    

int main()
{
    srand(time(0));
    int *array = createArray();
    negDob(array);
    sumElem(array);
}

int randomFn()
{
    int max = 100,min = -100,
    a = 0;
    a = rand()%(min + 1 - max ) + min;
    return a;
}

int * createArray()
{
    static int array[50];
    for (int i = 0; i < 5; i++)
    {
        array[i]=randomFn();
    }

    return array;

}

int * negDob(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",array[i]);
    }
        printf("\n");
    int min = 0,dobutok = 1;
    for (int i = 0; i < 5; i++) 
    {
        if(array[i] < 0)
        {
            dobutok = dobutok * array[i];
        }
    }
        if(dobutok == 1)
        {
            printf("There not is negative number");
        }
    printf("Dobutok is %d",dobutok);
    return array;
}

int * sumElem (int array[])
{
    int Min = array[0],
    sum = 0;
    int minn = 0;
    for (int i = 0; i < 5; i++)
    {
        for (i=0;i< 5;i++)
        {
            if (array[i]<Min)
            {
                Min=array[i];
                minn=i;
            }
        }
        for (i=minn+1; i < 5; i++)
            sum=sum+array[i];
    }
    printf(" and Sum is %d",sum);
    return array;
}
