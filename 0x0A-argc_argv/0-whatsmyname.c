#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of the arguments passed
 * @argv: argument vector of the pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
