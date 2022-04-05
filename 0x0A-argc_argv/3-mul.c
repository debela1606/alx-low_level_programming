#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers passed to this program
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%i\n", first * second);
		return (0);
	}
	printf("Error\n");
	return (1);
}
