#include "shell.h"

/**
 * main - function that passes the betty check
 * @ac: argument counter
 * @argv: argument list
 *
 * Return: always return 0
 */
int main(int ac, char **argv)
{
	char *prompt = "(EliShell) $";
	char *lptr;
	size_t al = 0;

	(void)ac;
	(void)argv;

	printf("%s", prompt);
	getline(&lptr, &al, stdin);
	printf("%s\n", lptr);

	free(lptr);
	return (0);
}

