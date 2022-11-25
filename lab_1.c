#include <stdio.h>

int main()
{
    int V,Area;   
    int a = 1, b = 2, c = 3; 

    V = a*b*c;
    Area = 2*(a*b+b*c+a*c);

    printf("\nVolume = %d",V);
    printf("\nArea = %d",Area);
    return 0;
}