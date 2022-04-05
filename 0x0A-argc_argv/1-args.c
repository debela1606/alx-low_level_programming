#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * 
 * Return: 0 (always successfull)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
 printf("%d\n", argc);
 return (0);
}
