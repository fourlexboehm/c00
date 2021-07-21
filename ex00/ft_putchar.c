#include <unistd.h>
//#include <stdio.h>
	
void	ft_putchar(char c)
{
	/* write takes the fd which is 0 for sdin
	1 for sdout or 2 for sderr, a constand,
	and a length */
	write(1, &c, 1);
}

/*int	main()
{
	ft_putchar("c");
}*/	
