#include "main.h"
/**
 * get_bit - gets value of int at an index
 * @n: long int
 * @index: starting index
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
