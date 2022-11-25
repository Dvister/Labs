#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R1 3 
#define C1 4 
#define R2 3 
#define C2 4 

void mulMat(int mat1[][C1], int mat2[][C2])
{
    int rslt[R1][C2];
 
    printf("Multiplication of given two matrices is:\n");
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            printf("%d\t", rslt[i][j]);
        }
 
        printf("\n");
    }
}

void EnterMat()
{
    int mat1[R1][C1] = {{2,6,5,4},
                        {4,8,5,9},
                        {4,5,8,1}};
    int mat2[R2][C2] = {{8,3,8,4},
                        {6,8,24,13},
                        {12,45,9,1}};
    
    mulMat(mat1,mat2);
}

int main()
{
    EnterMat();
}