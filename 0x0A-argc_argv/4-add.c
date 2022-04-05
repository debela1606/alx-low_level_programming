#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the sum of the whole numbers passed to this program
 * @argc: the number of command-line
 * @argv: The command-line arguments
 * 
 * Return: 0 if succcessfull, otherwise 1
 */
int main(int argc, char *argv[])
{
        int i,j, sum = 0;
        if (argc > 1)

                   for (i = 1; i < argc; i++)
                   {
                          for(j = 0;argv[i][j]; j++)
                           
				  if(argv[i][j] < '0' ||  argv[i][j] > '9')
                             
				   return (printf("Error\n"), 1);

                        sum += atoi(argv[i]);

                   }

        printf("%d\n", sum);
        
	return (0);

}
