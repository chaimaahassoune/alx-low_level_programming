#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
int c = 0;
int f_d;
int l_d;
while (c <= 99)
{
f_d = c / 10;
l_d = c % 10;
if (f_d < l_d)
{
putchar(f_d + '0');
putchar(l_d + '0');
if (c != 89)
{
putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
