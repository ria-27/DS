/*Implement a C program to read, display, and find the product of two matrices using functions with appropriate parameters. 
• The matrices must be created using dynamic memory allocation (malloc or calloc). 
• Access matrix elements using array dereferencing (i.e., *(*(mat + i) + j) style).*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **A, **B, **C;
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of B: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    A = (int **)malloc(r1 * sizeof(int *));
    B = (int **)malloc(r2 * sizeof(int *));
    C = (int **)malloc(r1 * sizeof(int *));

    for(i = 0; i < r1; i++)
        A[i] = (int *)malloc(c1 * sizeof(int));

    for(i = 0; i < r2; i++)
        B[i] = (int *)malloc(c2 * sizeof(int));

    for(i = 0; i < r1; i++)
        C[i] = (int *)malloc(c2 * sizeof(int));

    printf("Enter A:\n");

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", *(A + i) + j);

    printf("Enter B:\n");

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", *(B + i) + j);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            *(*(C + i) + j) = 0;

            for(k = 0; k < c1; k++)
            {
                *(*(C + i) + j) +=
                    (*(*(A + i) + k)) *
                    (*(*(B + k) + j));
            }
        }
    }

    printf("Result:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", *(*(C + i) + j));

        printf("\n");
    }

    for(i = 0; i < r1; i++)
        free(A[i]);

    for(i = 0; i < r2; i++)
        free(B[i]);

    for(i = 0; i < r1; i++)
        free(C[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}
