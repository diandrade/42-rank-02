#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_op(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *s)
{
	int	sign;
	int	sum;

	while (is_blank(*s))
		*s++;
	sign = 1;
	while (is_op(*s))
	{
		if (*s == '-')
			sign *= -1;
		*s++;
	}
	sum = 0;
	while (is_numeric(*s))
	{
		sum = sum * 10 + (*s - '0');
		*s++;
	}
	return (sum * sign);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
	{
		nbr = nbr + '0';
		write(1, &nbr, 1);
		return ;
	}
	ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
}

void print_result(int first, int second)
{
    ft_putnbr(first);
    write (1, " x ", 3);
    ft_putnbr(second);
    write (1, " = ", 3);
    ft_putnbr(first * second);
    write (1, "\n", 2);
}

void	tab_mult(int n)
{
    int i;

    i = 0;
    while (i++ < 9)
        print_result(i, n);  
}

int	main(int argc, char **argv)
{
	if (argc == 2)
    {
        tab_mult(9);
        return (0);
    }
    write (1, "\n", 2);
}