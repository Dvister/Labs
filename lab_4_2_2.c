#include <stdio.h>
#include <math.h>
int main(){

    int s = 0;
    int i = 1;

    while (i < 20)
    {
        i=pow(i,2);
        s += i;
        i++;
    }
    printf("Sum = %d ",s);
    


    return 0;
}