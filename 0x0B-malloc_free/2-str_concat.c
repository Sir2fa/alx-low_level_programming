#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates str
 * @s1: str 1
 * @s2: str 2
 * Return: the concat str
 */
char *str_concat(char *s1, char *s2)
{
	char *p1; /*malloc point for the two str*/
	unsigned int c1 = 0, c2 = 0, x;

	if (!s1)
		s1 = "";
	else
		while (s1[c1])
			c1++;
	if (!s2)
		s2 = "";
	else
		while (s2[c2])
			c2++;
	c2++;
	p1 = malloc((c1 * sizeof(char)) + (c2 * sizeof(char)));

	if (!p1)
		return (NULL);
	for (x = 0; x < (c1 + c2); x++)
		if (x < c1)
			p1[x] = s1[x];
		else
			p1[x] = s2[x - c1];
	return (p1);
}
