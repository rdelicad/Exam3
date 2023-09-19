#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

void	putstr(char *str, int *cont)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		cont += write (1, str, 1);
		str++;
	}
}

void	putbase(long int n, int base, int *cont)
{
	char *hex = "0123456789abcdef";
	if (n < 0)
	{
		cont += write (1, "-", 1);
		n *= -1;
	}
	if (n >= base)
	{
		putbase(n / base, base, cont);
	}
	cont += write(1, &hex[n % base], 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i = 0;
	int		cont = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 's' || str[i + 1] == 'x'))
		{
			if (str[i] == 's')
				putstr(va_arg(args, char *), &cont);
			else if (str[i] == 'd')
				putbase((long int)va_arg(args, int), 10,  &cont);
			else if (str[i] == 'x')
				putbase((long int)va_arg(args, unsigned int), 16,  &cont);

		}
		else
			cont += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (cont);
}

int main()
{
	char c = "sdfsdf";
	//espedicifador 's'
	printf("%c - ", c);
	ft_printf("%c", c);	
	//especificador 'd'
	
	//especificador 'x'
}
