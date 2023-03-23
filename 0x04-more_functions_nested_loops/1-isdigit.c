#include "main.h"

/**
 * _isdigit - scans digits in 0 through 9
 * @c: c - Variable
 * Return: 0
 */
int _isdigit(int c)
{

	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
