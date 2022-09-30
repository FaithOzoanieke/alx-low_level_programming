#include <stdio.h>
#include "main.h"

/**
 * main - This would print the number of arguments passed to the program
 * @argc: The number of arguments passed
 * @argv: The array of arguments in the program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
