#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'B') && (c <= 'D'))
		return (1);
	else
		return (0);
