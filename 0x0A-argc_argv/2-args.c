#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 (always successfull)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
        printf("%s\n", argv[]);
        return (0);
}
