#include <main.h>
/**
 * _isupper - checks for uppercase char.
 * @c: c - Var
 * Return: 1 success else return 0.
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
