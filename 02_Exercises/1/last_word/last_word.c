/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:03:35 by galpers           #+#    #+#             */
/*   Updated: 2024/02/09 14:13:41 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0; // Index for iterating through the string
		int start = 0; // Start index of the last word
		int end = 0; // End index of the last word
		char *str = av[1]; // The input string

		while (str[i] != '\0')
		{
			// If the current character is not a space or tab, it might be the start of a word
			if (str[i] != ' ' && str[i] != '\t')
			{
				start = i; // Set the start index to the current index
				// Iterate through the word until a space, tab, or the end of the string is found
				while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
					i++;
				end = i; // Set the end index to the current index
			}
			else // Move to the next character only if it's a space or tab
				i++;
		}
		// If a word was found, write it to the standard output
		if (end > start)
			write(1, str + start, end - start);
	}
	write(1, "\n", 1);
}


// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while (av[1][i] != '\0')
// 			i++;
// 		i--;
// 		while ((av[1][i] == ' ' || av[1][i] == '\t') && i != 0)
// 			i--;	
// 		while (av[1][i] != ' ' && av[1][i] != '\t'  && i != 0)
// 			i--;
// 		if (av[1][i] == ' ' || av[1][i] == '\t')
// 			i++;
// 		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
// 		{	
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }