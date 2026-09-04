#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '+' || c == '-')
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
	while (is_sign(*s))
	{
		if (*s == '-')
			sign *= -1;
		*s++;
	}
	sum = 0;
	while (is_numeric(*s))
		sum = sum * 10 + (*s++ - '0');
	return (sum * sign);
}

void	print_hex(int decimal)
{
	char	*base;

	base = "0123456789abcdef";
	if (decimal >= 16)
		print_hex(decimal / 16);
	write(1, &base[decimal % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 2);
}