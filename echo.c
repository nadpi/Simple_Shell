#include "shell.h"
/**
 * echoy - handle the echo $$
 * Return: Nothing
 */
void echoy(void)
{
	printf("%d\n", getpid());
}
