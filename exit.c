#include "shell.h"
/**
 * exity - handle the exit command
 * @arg: command
 * @command_fail: if prev command failed or not
 * Return: nothing
 */
void exity(char **arg, int command_fail)
{
	if (_strcmp(arg[0], "exit") == 0)
	{
		if (arg[1] != NULL)
		{
			if (isdigit(*arg[1]))
			{
				if (atoi(arg[1]) < 0)
				{
					fprintf(stderr, "./hsh: 1: exit: Illegal number: %s\n", arg[1]);
					exit(2);
				}
				exit(atoi(arg[1]));
			}
			else
			{
				fprintf(stderr, "./hsh: 1: exit: Illegal number: %s\n", arg[1]);
				exit(2);
			}
		}
		else
		{
			exit(command_fail);
		}
	}
}
