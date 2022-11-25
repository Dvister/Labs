#include <stdio.h>
int main(void)
{
    int a[10];
    int n;
    int *ptr = a;
    printf("N: ");
    scanf("%i",&n);
    int i;
    for (i = 0; i<n ; i++)
    {
        printf("a[%i]: ",i+1);
        scanf("%i",&a[i]);
    }
    int num = 0;
    int *amount = &num; 

    for (i=0; i<n-1; ++i) {
        if (*(a+i)<*(a+i+1)) {
            printf("%i \n",i+1);
            ++*amount;
        }
    }
    printf("Numbers %i \n",num);
    return 0;
}