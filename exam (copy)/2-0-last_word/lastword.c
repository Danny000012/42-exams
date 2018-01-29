
#include <unistd.h>

void ptc(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		i = i - 1;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != 0)
			i--;
		i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			ptc(av[1][i]);
			i++;
		}
		ptc('\n');
	}
	else
	{
		ptc('\n');
	}
	return (0);
}
