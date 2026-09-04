void	ft_swap(int a, int b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;
	int	smallest_divisible;

	if (!a || !b)
        return (0);
    
    if (a > b)
		ft_swap(a, b);
	smallest_divisible = 1;
	i = smallest_divisible;
	while (i++ < b)
	{
		if (a % i == 0 && b % i == 0)
		{
			smallest_divisible = i;
			break ;
		}
	}
	return (smallest_divisible);
}