#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argv: argument vector
* @argc: argument count
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
else
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
