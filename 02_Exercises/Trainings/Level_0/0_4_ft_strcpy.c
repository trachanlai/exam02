/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_4_ft_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:09:21 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 18:20:47 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] == '\0';
	return(s1);
}




// char *ft_strcpy(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s2[i] != '\0')
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = '\0';
// 	return (s1);
// }

// #include <stdio.h>
// int main (void)
// {
// 	char source[] = "hello";
// 	char dest[20];
// 	ft_strcpy(dest, source);
// 	printf("%s", dest);
// }
