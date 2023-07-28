#include <stdio.h>

/**
 * first - Prints the sentence before a main.
 * Function is executed.
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
