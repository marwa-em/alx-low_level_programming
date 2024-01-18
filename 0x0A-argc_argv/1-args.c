#include <stdio.h>

/**
 *main- prints the number of argiments
 *@argc: counts the number of arguments
 *@argv: argument vector
 *Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

