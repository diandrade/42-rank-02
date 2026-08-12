int	ft_atoi(const char *nptr)
{
	int op;
	int totalsum;

	op = 1;
	totalsum = 0;
	while (*nptr == ' ')
		*nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			op *= -1;
		*nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		totalsum = totalsum * 10 + (*nptr++ - '0');
	return (totalsum * op);
}