#include <stdio.h>
#include <math.h>

int main()
{    
    int array[100], maximum, size, c, location = 1;
    int sum = 0, dif = 0;
    
    printf("Enter the number of elements in array = ");
    scanf("%d", &size);
    for (c = 0; c < size; c++)
    {
        printf("a[%d]= ", c); 
        scanf("%d", &array[c]);
    }
    maximum = array[0];
    
    for (c = 0; c < size; c++)
    {
        if (array[c] > maximum)
        {
                maximum  = array[c];
                location = c+1;
        }
    }
    for(c = 1; c < size -1; c++)
    {
        sum += array[c];
    }
    printf("\nMaximum element is present at location %d and it's value is %d Sum = %d.\n", location, maximum,sum);
    return 0;    
    
}