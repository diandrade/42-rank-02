#include <unistd.h>

int	ft_atoi(char *nptr)
{
	int	op;
	int	totalsum;

	while (*nptr == ' ')
		*nptr++;
	op = 1;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			op *= -1;
		*nptr++;
	}
	totalsum = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		totalsum = totalsum * 10 + (*nptr - '0');
		*nptr++;
	}
	return (totalsum * op);
}

void	ft_putnbr(int nbr)
{
	long	lnb;

	lnb = nbr;
	if (lnb >= 0 && lnb <= 9)
	{
		lnb += 48;
		write(1, &lnb, 1);
		return ;
	}
	ft_putnbr(lnb / 10);
	ft_putnbr(lnb % 10);
}

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int n)
{
	int	i;
	int	totalsum;

	i = 0;
	totalsum = 0;
	while (i < n)
	{
		if (is_prime(i))
			totalsum++;
		i++;
	}
	return (totalsum);
}

int	main(int argc, char **argv)
{
	int result;

	result = 0;
	if (argc == 2)
		result = add_prime_sum(ft_atoi(argv[1]));
	ft_putnbr(result);
	write(1, "\n", 2);
}