#include "main.h"

/**
* _strcat - A function that concatenates two strings.
*
*@dest: output dest
*@src: input source
*
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
  int i, j;
  
  for(i = 0; src[j] != '\0'; j++)
  {
    dest[i] = src[j];
    i++;
  }
  return (dest);
}
