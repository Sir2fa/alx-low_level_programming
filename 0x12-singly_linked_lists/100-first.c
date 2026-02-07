#include <stdio.h>

/**
 * myStartupFun - Apply the constructor attribute to myStartupFun () so that it
 * 	is excuted before main()
 */
void start(void) __attribute__((constructor));

/**
 * start - implementing start
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
