#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concat two str
 * @s1: str 1
 * @s2: str 2
 * @n: number of bytes of str 2
 * Return: concatenated string, if failed, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, len2 = 0, len = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s2[len2])
		len2++;
	len2++;
	if (n >= len2)
		n = len2;
	while (s1[len])
		len++;
	ptr = malloc((len + n + 1) * sizeof(char));

	if (!ptr)
		return (NULL);
	for (a = 0; a < (len + n); a++)
		if (a < len)
			ptr[a] = s1[a];
		else
			ptr[a] = s2[a - len];
	ptr[a] = '\0';
	return (ptr);
}

