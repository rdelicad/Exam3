#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

void putstr(char *str, int *cont)
{
	//Comprobar si es null
	//Bucle con (*str) recorriendo el string sumando puntero al contador
}

void putbase(long int n, int base, int *cont)
{
	//crear array de caracteres hexadecimal

	//si es negativo, contador + escribir '-'
	//multiplicar por -1

	//si n <= base, recursivad con n / base

	//contador + escribir direccion de hex[n % base]
}

int	ft_printf(const char *str, ...)
{
	//iniciar lista
	// crear contadores i y cont

	//comenzar va_start

	// bucle
	// if '%' y (i + 1) es 'd' o 's' o 'x'

	// ! sumar i++ para saltar '%'
	// if es 's' -> putstr con va_arg
	// if es 'd' -> putbase con va_arg
	// if es 'x' -> putbase con va_arg
	
	// sino, contador + escribir caracter str

	// sumar i++;
	
	//terminar va_end
	//return contador

}
int main(void)
{
    // n = 0
    int a = 0;
    int printf_cer = printf("Caracter 0: %d\n", a);
    int ft_printf_cer = ft_printf("Caracter 0: %d\n", a);
    printf("Número de caracteres (printf): %d\n", printf_cer);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_cer);

    // base16
    int i = 1245;
    printf("Base 16\n");
    printf("%x\n", i);
    ft_printf("%x\n", i);

    // Caracter nulo
    char *null_str = NULL;
    int printf_chars = printf("Caracter nulo: %s\n", null_str);
    int ft_printf_chars = ft_printf("Caracter nulo: %s\n", null_str);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    // INT_MAX y INT_MIN
    int max = INT_MAX;
    int min = INT_MIN;
    printf_chars = printf("INT_MAX: %d\n", max);
    ft_printf_chars = ft_printf("INT_MAX: %d\n", max);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    printf_chars = printf("INT_MIN: %d\n", min);
    ft_printf_chars = ft_printf("INT_MIN: %d\n", min);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    // Caracteres vacíos
    char empty_str[] = "";
    printf_chars = printf("Caracteres vacíos: %s\n", empty_str);
    ft_printf_chars = ft_printf("Caracteres vacíos: %s\n", empty_str);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    // Otros casos que pueden fallar
    int num = 123;
    printf_chars = printf("Número decimal: %d\n", num);
    ft_printf_chars = ft_printf("Número decimal: %d\n", num);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    unsigned int hex = 0xabcdef;
    printf_chars = printf("Número hexadecimal: %x\n", hex);
    ft_printf_chars = ft_printf("Número hexadecimal: %x\n", hex);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    int negative = -123;
    printf_chars = printf("Número negativo: %d\n", negative);
    ft_printf_chars = ft_printf("Número negativo: %d\n", negative);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    unsigned int large_hex = 0xffffffff;
    printf_chars = printf("Número hexadecimal grande: %x\n", large_hex);
    ft_printf_chars = ft_printf("Número hexadecimal grande: %x\n", large_hex);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    unsigned int negative_hex = -0xffffffff;
    printf_chars = printf("Número hexadecimal negativo: %x\n", negative_hex);
    ft_printf_chars = ft_printf("Número hexadecimal negativo: %x\n", negative_hex);
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    // char
    printf_chars = printf("Hola mundo\n");
    ft_printf_chars = ft_printf("Hola mundo\n");
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    // %
    printf_chars = printf("%%\n");
    ft_printf_chars = ft_printf("%%\n");
    printf("Número de caracteres (printf): %d\n", printf_chars);
    printf("Número de caracteres (ft_printf): %d\n", ft_printf_chars);

    return 0;
}
