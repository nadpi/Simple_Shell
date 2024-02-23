#include "shell.h"
/**
 * _exit - handle the exit command
 * @arg: command
 * Return: nothing
 */
void exity(char **arg)
{
if (_strcmp(arg[0], "exit") == 0) {
        if (arg[1] != NULL) {
            exit(atoi(arg[1]));
        } else {
            exit(EXIT_SUCCESS);
        }
    }
}
