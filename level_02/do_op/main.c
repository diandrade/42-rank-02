#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	printf("\n");
}