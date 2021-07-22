#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = '0';
	b = '1';
	c = '2';

	while( a <= '7' ){
		while ( b <= '8' ){
			b++;
			while ( c <= '9' ){
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);

				if	( a != 7 || a != 8 || b != 9 )
					+
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
