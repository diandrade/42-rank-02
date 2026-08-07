#include <unistd.h>

int	rot_13_conv(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c + 13 > 'z')
			return (c - 13);
		return (c + 13);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		if (c + 13 > 'Z')
			return (c - 13);
		return (c + 13);
	}
}

int	main(int argc, char **argv)
{
    int rot_13_value;

	if (argc == 2)
	{
		while (*argv[1])
        {
            rot_13_value = rot_13_conv(*argv[1]++);
            write(1, &rot_13_value, 1);
        }
	}
	write(1, "\n", 2);
}