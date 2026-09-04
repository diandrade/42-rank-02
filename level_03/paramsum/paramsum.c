#include <unistd.h>

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

int	main(int argc)
{
	if (argc >= 2)
	{
		ft_putnbr(argc - 1);
		write(1, "\n", 2);
	}
	else
	{
		ft_putnbr(0);
		write(1, "\n", 2);
	}
}