#include <unistd.h>

/* increment c when  c <= 9, then write a, b and c to sdout
then increment b while b <=8 then incremet a while it is 
<=7* writing ", " between each number */

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' || b != '8' || c != '9')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
