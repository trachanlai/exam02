/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_13_str_capitalizer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:03:08 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 22:11:49 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>

#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	int upper = 0;

	while(str[i])
	{
		if(i == 0 && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			upper = 1;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if(upper && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if(!upper && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			upper = 0;
		}
		else if(str[i] == ' ' || str[i] == '\t')
			upper = 1;
		i++;
	}
	write(1, str, i);
}

int main(int ac, char **av)
{
	int i = 1;

	if(ac > 1)
	{
		while(ac > i)
		{
			str_capitalizer(av[i]);
			i++;
		}
	}
	write(1, "\n", 1);
}





// #include <unistd.h>

// void	str_capitalizer(char *str)
// {
// 	int i = 0; // Initialize index to 0
// 	int upper = 0; // Initialize flag to indicate next character should be lowercase

// 	// Loop through each character in the string
// 	while (str[i])
// 	{	
// 		// If it's the first character and it's a letter, set the flag to uppercase
// 		if (i == 0 && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
// 			upper = 1;
// 		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
// 		{
// 			if (upper && str[i] >= 'a' && str[i] <= 'z')
// 				str[i] -= 32;
// 			else if (!upper && str[i] >= 'A' && str[i] <= 'Z')
// 				str[i] += 32;
// 			upper = 0; // Reset the flag to indicate next character should be lowercase
// 		}
// 		// If the character is a space or a tab
// 		else if (str[i] == ' ' || str[i] == '\t')
// 			upper = 1; // Set the flag to indicate next character should be uppercase
// 		i++; // Move to the next character
// 	}
// 	write(1, str, i);
// }

// int		main(int argc, char **argv)
// {
// 	int i = 1; // Initialize index to 1 to skip the program name

// 	// If there are any arguments
// 	if (argc > 1)
// 	{
// 		while (i < argc)
// 		{
// 			str_capitalizer(argv[i]); 
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
