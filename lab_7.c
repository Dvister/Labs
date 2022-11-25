#include <stdio.h> 
#include <stdlib.h>  
#include <time.h> 
int AbsElem(void) 
{ 
    const int size=3, Low=-100, High=100;  
    srand(time(0));
    int n,m; 
    int a[n][m],maximum, location = 1;
    int sum = 0; 
    int dif[n][m];


    printf("Enter the matrix row and collums: ");
    scanf("%d %d",&m,&n);

    maximum = a[0][0];

    for (int i=0; i<n; i++)
    { 
        for (int j = 0; j<m; j++) 
        {
            a[i][j]=rand() % (Low + 1 - High) + Low; 
            printf("\tOld matrix a[%d][%d]=%d\t", i,j, a[i][j]); 
            if (a[i][j] > maximum)
            {
                maximum = a[i][j];
            }
            dif[i][j]  = a[i][j]/maximum;
            printf("New matrix a[%d][%d]=%d\n",i,j,dif[i][j]);
        }
        printf("\n");
    }
    printf("Max element in the matrix %d.",maximum);
    return 0;
}

int main()
{
    AbsElem();
}