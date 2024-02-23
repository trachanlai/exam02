/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_7_repeat_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:27:31 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 09:58:46 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>

int main(int ac, char **av)
{
	int k;
	int i = 0;
	char *str = av[1];

	if(ac == 2)
	{
		while(str[i])
		{
			k = 1;
			if(str[i] >= 'a' && str[i] <= 'z')
				k = str[i] - 96;
			else if(str[i] >= 'A' && str[i] <= 'Z')
				k = str[i] - 64;
			while(k >= 1)
			{
				write(1, &str[i], 1);
				k--;
			}
			i++;
		}
	
	}
	write(1, "\n", 1);
}








// int main(int ac, char **av)
// {
// 	int i;
// 	int k;
// 	char *str;

// 	i = 0;
// 	if(ac == 2)
// 	{
// 		str = av[1];
// 		while(str[i] != '\0')
// 		{
// 			k = 1;
// 			/*
// 			k determines how many time a character is printed.
// 			If the character is not a letter, k=1, meaning they are printed only once.
// 			*/
// 			if (str[i] >= 'A' && str[i] <= 'Z')
// 				k = str[i] - 64;
// 			if (str[i] >= 'a' && str[i] <= 'z')
// 				k = str[i] - 96;
// 			while (k >= 1)
// 			{
// 				write(1, &str[i], 1);
// 				k--;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }
