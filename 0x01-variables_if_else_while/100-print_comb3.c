#include <stdio.h>
/**
*main - Entry point
*describtion: combination
*Return: Always 0
*/
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 47; m <= 57; m++)
{
if (m > n)
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
