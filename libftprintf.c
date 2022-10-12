
#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
			{
				va_list	argptr;
				va_start(argptr, str);
				ft_putstr_fd(1, va_arg(argptr, char *));
			}
		}

	}
}