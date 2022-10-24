#include "libftprintf.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	char	*p = "";
	int		n = 55;
	printf("ORIGINAL < Return %d >\n\n", printf("\n\nORIGINAL-->%d<--\n", n));
	ft_printf("FT_42    < Return %d >\n\n", ft_printf("\n\nFT_42   -->%d<--\n", n));
	return (0);
}
