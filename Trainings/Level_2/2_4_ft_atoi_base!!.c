/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_4_ft_atoi_base!!.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:17:10 by tlai              #+#    #+#             */
/*   Updated: 2024/02/16 16:19:18 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * str_base + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = res * str_base + (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
			res = res * str_base + (str[i] - 'A' + 10);
		else
			break;
		i++;
	}
	return(sign * res);
}





// int	ft_atoi_base(const char *str, int str_base)
// {
// 	int i = 0; // Initialize counter
// 	int result = 0; // Initialize result
// 	int sign = 1; // Initialize sign

// 	// Skip all the spaces and control characters at the beginning of the string
// 	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
// 		i++;

// 	// If the first non-space character is a '-', set sign to -1 and increment counter
// 	if (str[i] == '-')
// 	{
// 		sign = -1;
// 		i++;
// 	}

// 	// Loop through the string
// 	while (str[i])
// 	{
// 		// If the character is a digit from 0 to 9
// 		if (str[i] >= '0' && str[i] <= '9')
// 			result = result * str_base + (str[i] - '0'); // Convert it to an integer and add it to result
// 		// If the character is a lowercase letter from 'a' to 'f'
// 		else if (str[i] >= 'a' && str[i] <= 'f')
// 			result = result * str_base + (str[i] - 'a' + 10); // Convert it to an integer and add it to result
// 		// If the character is an uppercase letter from 'A' to 'F'
// 		else if (str[i] >= 'A' && str[i] <= 'F')
// 			result = result * str_base + (str[i] - 'A' + 10); // Convert it to an integer and add it to result
// 		else
// 			break; // If the character is not a valid digit or letter, break the loop

// 		i++; // Move to the next character
// 	}

// 	return (result * sign); // Return the result multiplied by the sign
// }

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("1010", 2)); // Should print 10
	printf("%d\n", ft_atoi_base("A", 16)); // Should print 10
	printf("%d\n", ft_atoi_base("F", 16)); // Should print 15
	printf("%d\n", ft_atoi_base("FF", 16)); // Should print 255
	printf("%d\n", ft_atoi_base("-10", 10)); // Should print -10
	printf("%d\n", ft_atoi_base("   10", 10)); // Should print 10
	printf("%d\n", ft_atoi_base("   -10", 10)); // Should print -10
	printf("%d\n", ft_atoi_base("123abc", 10)); // Should print 123
	printf("%d\n", ft_atoi_base("123abc", 16)); // Should print 1194684
	return 0;
}