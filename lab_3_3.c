#include <stdio.h>
#include <math.h>

int main(){

    int x,y,z;
    double a;

    printf("Введiть значення x:");
    scanf("%d",&x);
    printf("Введiть значення y:");
    scanf("%d",&y);
    printf("Введiть значення z:");
    scanf("%d",&z);

    a = (sqrt(x)+2*sqrt(y*z))/(sqrt(y)-2*sqrt(x*z));

    if (sqrt(y) - 2*sqrt(y*z) == 0)
    {
        printf("Неможливо обчислити або корiнь - \n");
    }
    
    else if (x < 0 || y < 0 || z < 0)
    {
        printf("Корінь з від’ємного числа\n");
    
    }
    else printf(" a = (sqrt(%d)+2*sqrt(%d*%d))/(sqrt(%d)-2*sqrt(%d*%d)) = %.2lf",x,y,z,y,x,z,a);

    return 0;
}