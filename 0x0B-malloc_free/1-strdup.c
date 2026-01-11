#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy the string given to a newly allocated space in memory.
 * @str: sting to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *s = str; /*to access the address of the str*/
	char *ptr; /*pointer for str*/
	unsigned int x = 0, y;/*x to get the length of str and y for loop*/

	if (s == NULL)
		return (NULL);
	while (s[x])
		x++;
	x++;
	ptr = (char *)malloc(x * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		ptr[y] = s[y];
	return (ptr);
}
