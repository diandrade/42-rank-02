#include <stdlib.h>

char	extract_char(long nbr, long index)
{
	while (index--)
		nbr /= 10;
	nbr %= 10;
	return (nbr + '0');
}

char	*ft_itoa(int nbr)
{
	int		is_minus;
	char	*result;
	long	digits;
	long	lnbr;
	long	i;

	if (nbr == 0)
		return ("0");

	is_minus = 0;
	if (nbr < 0)
	{
		is_minus = 1;
		nbr = -nbr;
	}
		
	lnbr = nbr;
	digits = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		digits++;
	}

	i = 0;
	if (is_minus)
	{
		result = malloc(digits + 2 * sizeof(char));
		result[i++] = '-';
	}
	else
		result = malloc(digits + 1 * sizeof(char));

	while (digits--)
	{
		result[i++] = extract_char(lnbr, digits);
	}
		
	result[i] = '\0';
	return (result);
}