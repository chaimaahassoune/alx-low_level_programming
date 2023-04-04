#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals in a square matrix
 *
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int x, y;
    int sum1 = 0;
    int sum2 = 0;

    for (x = 0, y = size - 1; x < size * size; x += size + 1, y += size - 1)
    {
        sum1 += a[x];
        sum2 += a[y];
    }

    printf("%d, %d\n", sum1, sum2);
}
