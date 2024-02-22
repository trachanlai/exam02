/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_12_print_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:20:08 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 19:01:16 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $

#include <unistd.h>
void print_hex(int n)
{
	char hex[] = "0123456789abcdef";
	if(n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int ft_atoi(char *str)
{
	int num = 0;

	while(*str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return(num);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}

// #include <unistd.h>

// // Function to convert a string to an integer
// int	ft_atoi(char *str)
// {
// 	int num = 0;

// 	while (*str != '\0')
// 	{
// 		num = num * 10 + (str[i] - '0');
// 		num++;
// 	}
// 	return num;
// }

// // Function to print a number in hexadecimal
// void	print_hex(int n)
// {
// 	char	*hex;

// 	hex = "0123456789abcdef";
// 	if (n >= 16)
// 		print_hex(n / 16);
// 	write(1, &hex[n % 16], 1);
// }

// int		main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		print_hex(ft_atoi(argv[1]));
// 	write(1, "\n", 1);
// 	return (0);
// }
