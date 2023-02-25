#include <stdio.h>
/**
*main - Entry point
*describtion: combination
*Return: Always 0
*/
int main(void)
{
int n, m;
for (n = 47; n <= 57; n++)
{
for (m = 48; m <= 56; m++)
{
if (n > m)
{
putchar(m);
putchar(n);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
