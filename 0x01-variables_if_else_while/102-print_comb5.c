#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e;
int f;
for (c = 0; c < 10; ++c)
{
for (d = 0; d < 10; ++d)
{
for (e = c; e < 10; ++e)
{
for (f = ((c == e) ? (d + 1) : 0); f < 10; ++f)
{
putchar('0' + c);
putchar('0' + d);
putchar(' ');
putchar('0' + e);
putchar('0' + f);
if (c != 9 || d != 8 || e != 9 || f != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
