#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int i;

    if (n < 2)
        return (0);
    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void	fprime(int nbr)
{
	int	i;

    if (nbr == 1)
        printf("1");

	i = 1;
	while (i <= nbr)
	{
		if (is_prime(i))
		{
			while (nbr % i == 0)
			{
				nbr /= i;
				if (nbr == 1)
					printf("%d", i);
				else
					printf("%d*", i);
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
}