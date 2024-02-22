/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:33:45 by galpers           #+#    #+#             */
/*   Updated: 2024/02/08 19:12:38 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char c, char *str, int range)
{
	int	i;

	i = 0;
	while (i < range)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (is_in_string(av[1][i], av[2]) && !check_double(av[1][i], av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}



// int	main(int ac, char **av)
// {
// 	int	i;
// 	int k;
// 	int l;
// 	char *s1;
// 	char *s2;

// 	i = 0;
// 	l = 0;
// 	if (ac == 3)
// 	{
// 		s1 = av[1];
// 		s2 = av[2];
// 		while (s1[i] != '\0')
// 		{
// 			k = 0;
// 			while (s2[k] != '\0')
// 			{
// 				if(s1[i] == s2[k])
// 				{ 
// 					l = 0;
// 					while (s1[l] != s1[i])
// 						l++;
// 					if (l == i)
// 					{
// 						l = 0;
// 						while (s2[l] != s2[k])
// 							l++;
// 						if (l == k)
// 							write(1, &s1[i], 1);
// 					}
// 				}
// 				k++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }