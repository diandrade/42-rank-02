#include <unistd.h>

int	rot_1_conv(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c + 1 > 'z')
			return ('a');
		return (c + 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		if (c + 1 > 'Z')
			return ('A');
		return (c + 1);
	}
}

int	main(int argc, char **argv)
{
    int rot_1_value;

	if (argc == 2)
	{
		while (*argv[1])
        {
            rot_1_value = rot_1_conv(*argv[1]++);
            write(1, &rot_1_value, 1);
        }
	}
	write(1, "\n", 2);
}