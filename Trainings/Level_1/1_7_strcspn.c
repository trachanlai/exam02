/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_7_strcspn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:03:45 by tlai              #+#    #+#             */
/*   Updated: 2024/02/15 12:39:15 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

/*
Scans str1 for the first occurrence of any of the characters that are part of str2(reject), 
returning the number of characters of str1 read before this first occurrence.

The search includes the terminating null-characters. 
Therefore, the function will return the length of str1 if none of the characters of str2(reject) are found in str1.
*/

// Lib for size_t
#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		while (reject[k] != '\0')
		{
			if (s[i] == reject[k])
				return(i);
			k++;
		}
		k = 0;
		i++;
	}
	return(i);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	
	printf("my function %lu\n", ft_strcspn("123456789est", "9"));
	printf("OG %lu", strcspn("123456789est", "9"));
}
