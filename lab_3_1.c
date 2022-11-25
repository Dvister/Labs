#include <stdio.h>
#include <math.h>

int main(){

    double a,s;
    double f;

    printf("\nEnter s = ");
    scanf("%lf",&s);
    printf("\nEnter a = ");
    scanf("%lf",&a);

    if (s<0){
        f = 2*s+a*pow(s,2);
    }
    else if (s==0 && a>15){
        f = sqrt(s+a-15)+8*s*a;
    }
    else if (s>0){
        f=12-(s/(2*a)-4);
    }
    else printf("Impossible to calculate\n");
    if (a<15) printf("Impossible to calculate\n");
    printf("Result %.2lf\n",f);
}