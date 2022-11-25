#include <stdio.h> 
#include <stdlib.h>  
#include <time.h> 
int main(void) 
{ 
    const int size=5, Low=-100, High=100;  
    srand(time(0)); 
    int a[size],maximum, location = 1;
    int sum = 0; 

    for (int i=0; i<size; i++)
    { 
    a[i]=rand() % (Low + 1 - High) + Low; 
    printf("a[%d]= %d\t", i, a[i]); 
    }
    
    maximum = a[0];
    
    for (int i = 1; i < size; i++)
    {
        if (a[i] > maximum)
        {
                maximum  = a[i];
                location = i+1;
        }
    }
    for(int i = 1; i < size-1; i++)
    {
        sum += a[i];
    }

    printf("\nMaximum element is present at location %d and it's value is %d and Sum = is %d.\n", location, maximum,sum);
    return 0;
}