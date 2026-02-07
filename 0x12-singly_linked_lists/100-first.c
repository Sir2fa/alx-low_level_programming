#include <stdio.h>

/**
 * start - the string before the function execution.
 */

void __attribute__((constructor)) start(void);

void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
