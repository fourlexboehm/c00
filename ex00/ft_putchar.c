#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* write takes the fd which is 0 for sdin
1 for sdout or 2 for sderr, a constand,
and a length */	

/*int	main(){
	ft_putchar('a'); }
	return(0)
*/
