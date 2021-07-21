#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	number;

	number = '0';
	while (number <= '9' )
	{
		write(1, &number, 1);
		number++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (1);
}
*/
