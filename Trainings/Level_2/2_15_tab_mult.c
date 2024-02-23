/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_15_tab_mult.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:56:06 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 11:14:02 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a number's multiplication table.

// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

// Examples:

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
// $>

#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;
	while(*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return(n);
}

void ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 1;
	int num = 0;

	if(ac == 2)
	{
		num = ft_atoi(av[i]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(num * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}



// #include <unistd.h>

// int ft_atoi(char *str)
// {
// 	int num = 0;

// 	while(*str)
// 	{
// 		num = num * 10 + (*str - '0');
// 		str++;
// 	}
// 	return(num);
// }

// void    ft_putnbr(int n)
// {
// 	if (n >= 10)
// 		ft_putnbr(n / 10);
// 	char c = n % 10 + '0';
// 	write(1, &c, 1);
// }

// int     main(int argc, char **argv)
// {
// 	int i;
// 	int number;

// 	if (argc == 2)
// 	{
// 		number = ft_atoi(argv[1]);
// 		i = 1;
// 		while (i <= 9)
// 		{
// 			ft_putnbr(i);
// 			write(1, " x ", 3);
// 			ft_putnbr(number);
// 			write(1, " = ", 3);
// 			ft_putnbr(i * number);
// 			write(1, "\n", 1);
// 			i++;
// 		}
// 	}
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }
