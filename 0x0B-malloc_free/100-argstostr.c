#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: str
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: argument
 * Return: str
 */

char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, y = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

for (; i < ac; i++, nc++)
	nc += _strlen(av[i]);

s = malloc(sizeof(char) * nc + 1);
if (s == 0)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (y = 0; av[i][y] != '\0'; y++, cmpt++)
		s[cmpt] = av[i][y];

	s[cmpt] = '\n';
	cmpt++;
}
s[cmpt] = '\0';

return (s);
}
