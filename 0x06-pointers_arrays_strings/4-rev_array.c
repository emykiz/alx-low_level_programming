#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
int i = 0, half;

for (half = n / 2; half > 0; half--, i++)
{
a[n - i - 1] += a[i];
a[i] = a[n - i - 1] - a[i];
a[n - i - 1] = a[n - i - 1] - a[i];
}
}
