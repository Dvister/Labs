#include <stdio.h>
#include <math.h>

int main()
{
    printf("\v\tTask 2\n");
    const int a = -50, b = 4, c =9;
    float y;

    y = ((c*a)/(a+b))+((b*c)/(c+a));
    printf("Result y = (c*a)/(a+b))+((b*c)/(c+a) = %.2lf",y);
}