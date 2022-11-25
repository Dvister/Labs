#include <stdio.h>

void * createArray();

int main()
{
    createArray();
}

void * createArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);    

    printf("Original array\n");
    for (int i = 0; i < length; i++)
    {

        printf("a[%d]=%d",i,arr[i]);
        printf("\t");
    }
    printf("\n");
    printf("Array in reverse order:\n");
    for (int i = length-1; i >= 0; i--)
    {        
        printf("a[%d]=%d",i,arr[i]);
        printf("\t");
    }
    return 0;
}
