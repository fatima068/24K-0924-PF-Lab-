/*Write a C program to multiply two matrices of size 3x3 and display the result matrix. Also subtract the resultant matrix from Matrix A as well.*/

#include <stdio.h>
int main()
{
    int matrixA[3][3], matrixB[3][3], matrixC[3][3];
    int rowA, rowB, rowC, colA, colB, colC, x, y;
    
    printf("enter matrixA elements:\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            scanf("%d", &matrixA[x][y]);
        }
    }
    
     printf("enter matrixB elements:\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            scanf("%d", &matrixB[x][y]);
        }
    }
    
    for(colC=0; colC<3; colC++)
    {
        for(rowC=0; rowC<3; rowC++)
        {
            rowA=colC;
            colA=0;
            rowB=0;
            colB=rowC;
            matrixC[colC][rowC] = (matrixA[rowA][colA]*matrixB[rowB][colB]) + (matrixA[rowA][colA+1]*matrixB[rowB+1][colB]) + (matrixA[rowA][colA+2]*matrixB[rowB+2][colB]);
        }
    }
    printf("RESULT OF MULTIPLICATION\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("%d ", matrixC[x][y]);
        }
        printf("\n");
    }
    
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            matrixC[x][y] = matrixC[x][y] - matrixA[x][y];
        }
    }
    
    printf("\nAFTER SUBTRACTING MATRIX A FROM RESULT OF MULTIPLICATION\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            printf("%d ", matrixC[x][y]);
        }
        printf("\n");
    }
}
