#include <stdio.h>
/**
*main - Entry point
*describtion: combination
*Return: Always 0
*/
int main(void)
{
	int n;
	int m;

	n = 0;
	while (n <= 8)
	{
		m = n + 1;
		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	return(0);
}
