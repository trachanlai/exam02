/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_18_strpbrk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:38:07 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 11:49:11 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);


/*
strpbrk is used to search a string for any of a set of characters.

str1: string where the function will search for characters.
str2: string containing the characters to search for in str1.

The function returns a pointer to the first occurrence in str1 of any character from str2. 
If none of the characters from str2 are found in str1, the function returns a null pointer.
*/


#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		const char *set = s2;
		while(*set)
		{
			if(*set == *s1)
				return((char *)s1);
			set++;
		}
		s1++;
	}
	return(NULL);
}








// #include <stdio.h>
// char	*ft_strpbrk(const char *s1, const char *s2)
// {
// 	while (*s1)
// 	{
// 		const char *s = s2;
// 		while(*s != '\0')
// 		{
// 			if (*s == *s1)
// 				return((char *) s1);
// 			s++;
// 		}
// 		s1++;		
// 	}
// 	return (NULL);
// }


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "1234567890";
	char s2[] = "7452";

	printf ("mine: %s\n", ft_strpbrk(s1, s2));
	printf ("OG: %s\n", strpbrk(s1, s2));
	return (0);
}
