#include <stdio.h>
#include <math.h>


int main()
{
    printf("\v\tTask 3\n");
    int a,b;
    double x;

    printf("Enter num value a & b \n");
    scanf("%d %d", &a, &b);
    x = sqrt((a)-pow(b,2))+(sqrt(a*b));
    if (a-(pow(b,2)) <= 0)
    {
    printf("Число не може бути вiдемним\n");
    }
    else 
    {
        printf("Result x = %.2f ",x);
    }
}