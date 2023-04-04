#include "main.h"
/**

print_diagsums - Prints the sum of the two diagonals of a square matrix of integers

@a: The matrix of integers

@size: The size of the matrix

Return: void
*/
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    /* Calculate the sum of the diagonal from top-left to bottom-right */
    for (i = 0; i < size * size; i += size + 1)
    {
        sum1 += a[i];
    }

    /* Calculate the sum of the diagonal from top-right to bottom-left */
    for (i = size - 1; i < size * size - 1; i += size - 1)
    {
        sum2 += a[i];
    }

    /* Print the sums */
    _putchar( sum1, sum2);
}
