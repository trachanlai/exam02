/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_19_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:21:12 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 12:00:38 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);


char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char temp;

	while(str[len])
		len++;
	len--;
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "123456789";
// 	printf("%s\n", ft_strrev(str));
// }








// char *ft_strrev(char *str)
// {
// 	int i = 0; // This will be used to start from the beginning of the string
// 	int len = 0; // This will be used to start from the end of the string
// 	char temp; // This is a temporary variable used for swapping characters

// 	// This loop is used to calculate the length of the string
// 	// It keeps going until it finds the null terminator ('\0') at the end of the string
// 	while (str[len] != '\0')
// 		len++;

// 	len--; // Adjust for 0-indexing. Arrays in C start at index 0, so we subtract 1 from the length.

// 	// This loop is used to reverse the string
// 	// It keeps going until 'i' and 'len' meet in the middle
// 	while (i < len)
// 	{
// 		temp = str[i]; // Save the character at position 'i'
// 		str[i] = str[len]; // Replace the character at position 'i' with the character at position 'len'
// 		str[len] = temp; // Replace the character at position 'len' with the character originally at position 'i'
// 		i++; // Move 'i' one step towards the end
// 		len--; // Move 'len' one step towards the beginning
// 	}

// 	return str; // Return the reversed string
// }


// #include <stdio.h>

// int main()
// {
//     char test1[] = "Hello, World!";
//     printf("%s\n", ft_strrev(test1));

//     char test2[] = "0123456789";
//     printf("%s\n", ft_strrev(test2));

//     return 0;
// }

