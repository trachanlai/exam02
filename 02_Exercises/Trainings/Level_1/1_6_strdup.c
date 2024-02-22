/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_6_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:04:28 by tlai              #+#    #+#             */
/*   Updated: 2024/02/15 12:38:24 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);


#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *dst;
	
	while(src[i] != '\0')
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}



char *ft_strdup(char *src)
{
	int i = 0;
	char  *dst;

	while(src[i] != '\0')
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return(NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	printf("my function %s\n", ft_strdup("this is a test"));
// 	printf("%s\n", strdup("this is a test"));
// 	return (0);
// }
