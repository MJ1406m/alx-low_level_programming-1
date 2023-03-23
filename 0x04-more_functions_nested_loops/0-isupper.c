#include <main.h>
/**
 * _isupper - checks for uppercase char.
 * @c: c- Variable
 * Return: 1 success else 0
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
