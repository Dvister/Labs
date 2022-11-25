#include <stdio.h>
#include <math.h>

int main()
{

    int x,y,z;
    double b;

    printf("Введiть значення x = ");
    scanf("%d",&x);
    printf("Введiть значення y = ");
    scanf("%d",&y);
    printf("Введiть значення z = ");
    scanf("%d",&z);

    while(x<=0 || z==0)
    {
        printf("задайте  інші  значення\n");
        scanf("%d %d %d",&x, &y, &z);
    }
    while(((pow(x,4)/2) - (pow(sin(x), 2))*z) == 0)
    {
        printf("Enter other value");
    }
    b = (1 + (cos(y-2))) / ((pow(x,4)/2) - (pow(sin(x), 2))*z);
    printf("Result: %.2lf\n", b);
}