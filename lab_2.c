#include <stdio.h>
#include <math.h>

int main(){

    int n1,n2,n3;
    int arithmetic,difference,sum;

    printf("\tTask 1-1\n");
    printf("Enter your numbers: 1 and 2: "); 
    scanf("%d %d", &n1, &n2);
    difference = n2-n1;

    printf("Difference of number 2 and 1 = %d\n", difference);


    printf("\tTask 1-2\n");
    printf("Enter the numbers to calculate the arithmetic mean: \n");
    scanf("%d %d", &n1, &n2);
    arithmetic = (n1+n2)/2;
    printf("The arithmetic mean of two numbers = %d\n", arithmetic);


    printf("\tTask 1-3\n");
    sum = n1 + n2;
    printf("Sum of numbers = %d \n",sum);

    return 0;

}