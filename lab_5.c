#include <stdio.h>
#include <stdlib.h>
     
int main(void)
{
      int numbers[10], min = 0;
      int count = 10;
     
      printf("\nEnter the 10 numbers:\n");
      int i = 0,maximum,minimum,dif;
      int sum = 0;
     
      maximum = numbers[0];

      for(i = 0; i < count; i ++)
      {
        printf("%2d> ",i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        if (maximum < numbers[i]) 
        {
            maximum = numbers[i];
        }
      }
      for(i = 0; i < count; i++)
      {
        if (numbers[i] < numbers[min])
        {
            min = i;
        }
      }

      dif = abs(numbers[min] - maximum);
      
      printf("max = %d min = %d Difference = %d",maximum,numbers[min],dif);
      return 0;
    }