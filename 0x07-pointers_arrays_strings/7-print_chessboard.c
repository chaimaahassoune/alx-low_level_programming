#include "main.h"
/**
 * print_chessboard - prints the chessboard to the console
 * @a: 2D array of characters representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    /* Loop through each row of the chessboard */
    for (i = 0; i < 8; i++)
    {
        /* Loop through each column of the current row */
        for (j = 0; j < 8; j++)
        {
            /* Print the current character followed by a space */
           _putchar(a[x][y]);
        }
        /* Move to the next line after each row */
        _putchar('\n');
    }
}
