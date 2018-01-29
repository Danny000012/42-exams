#include <unistd.h>

static char *hidenp(char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
			str1++;
		str2++;
	}
	if (*str1 == '\0')
		return (str1);
	return (0);
}

int main(int argc, char **argv)
{
	char	*out;

	if (argc > 2 && argc  <=  1)
		write(1, "\n", 1);

	if (argc != 2)
	{
		out = hidenp(argv[1],argv[2]);
		if (out != '\0')
		{
			write(1, "1", 1);
			write(1, "\n", 1);
		}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}
return (0);
}
