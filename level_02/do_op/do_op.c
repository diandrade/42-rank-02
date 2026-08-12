#include "do_op.h"

void	do_op(void *first_addend, char *op, void *second_addend)
{
	char	*fa_ptr;
	char	*sa_ptr;

	fa_ptr = (char *)first_addend;
	sa_ptr = (char *)second_addend;
	if (*op == '/')
		printf("%d", atoi(fa_ptr) / atoi(sa_ptr));
	else if (*op == '*')
		printf("%d", atoi(fa_ptr) * atoi(sa_ptr));
	else if (*op == '+')
		printf("%d", atoi(fa_ptr) + atoi(sa_ptr));
	else if (*op == '-')
		printf("%d", atoi(fa_ptr) - atoi(sa_ptr));
	else if (*op == '%')
		printf("%d", atoi(fa_ptr) % atoi(sa_ptr));
}