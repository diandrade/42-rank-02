#include <unistd.h>

void	do_op(void *first_addend, char op, void *second_addend)
{
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	write(1, "\n", 2);
}