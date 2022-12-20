#include<stdio.h>
/**
 * swap_int -swap the value of int a and b
 * @a: first int
 * @b: second int
 * Return0
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
