#include <stdio.h>
#include <math.h>


int main()
{
    float x,y;
    float dx = 0;
    float PI = 3.14159;
    float a = PI/2;
    float b = 3*PI/2;


    x = a;
    printf("\t|   dx   |   y    |\n");
    printf("\t___________________\n");

    for(a = -PI/2 ; dx<=b ; dx+=(PI/3))
    { 
    y=pow(cos(x),2)+3*sin(x);
    printf("\t|  %.2lf  |  %.2lf  |\n",dx, y);
    printf("\t___________________\n");
    }

}