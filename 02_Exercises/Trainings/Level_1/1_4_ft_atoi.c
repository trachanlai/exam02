/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_4_ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:03:35 by tlai              #+#    #+#             */
/*   Updated: 2024/02/15 12:33:04 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;

	while(str[i] == 32)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr *10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}













int ft_atoi(const char *str)
{
	int sign;
	int i;
	int nbr;

	sign = 1;
	i = 0;
	nbr = 0;
	while (str[i] >= 9 && str[i] <= 13 && str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return(sign * nbr);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "201";

	printf("mine: %i\n", ft_atoi(str));
	printf("%i", atoi(str));
	return(0);
}
