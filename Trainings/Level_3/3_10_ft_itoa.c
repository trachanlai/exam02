/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_10_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:43:01 by tlai              #+#    #+#             */
/*   Updated: 2024/02/23 14:58:35 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);


#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	if(nbr == -2147483648)
		return("-2147483648\0");

	int n = nbr;
	int len = 0;

	// If the number is zero or negative, increment the length for the '0' or '-' sign
	if (nbr <= 0)
		len++;

	// Calculate the number of digits in the number
	while (n) 
	{
		n /= 10;
		len++;
	}


	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL) 
		return NULL;

	result[len] = '\0';

	// If the number is zero, the string is "0"
	if (nbr == 0)
	{
		result[0] = '0';
		return(result);
	}

	// If the number is negative, add a '-' sign at the start and make the number positive
	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr;
	}

	// Fill the string with the digits of the number, starting from the end
	while (nbr) 
	{
		result[--len] = nbr % 10 + '0';  // Convert the digit to a character and add it to the string
		nbr /= 10;  // Remove the last digit from the number
	}

	return result;
}

#include <stdio.h>

int main()
{
	char *str1 = ft_itoa(2310);
	printf("%s\n", str1);
	free(str1);

	char *str2 = ft_itoa(-2310);
	printf("%s\n", str2);
	free(str2);

	char *str3 = ft_itoa(0);
	printf("%s\n", str3);
	free(str3);

	return 0;
}
