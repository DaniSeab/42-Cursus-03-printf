#include "ft_printf.h"
#include <fcntl.h>
#include <stdio.h>

//for testing, not sent to moulinette
int		main(void)
{
	char	*p = NULL;
	int		n = 55;
	printf("< Return %d >\n\n", printf("\n\n %x \n\n", 0));
	ft_printf("< Return %d >\n\n", ft_printf("\n\n %x \n\n", 0));
	return (0);
}
