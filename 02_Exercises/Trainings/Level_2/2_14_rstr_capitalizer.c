/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_14_rstr_capitalizer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:12:14 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 22:55:10 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rstr_capitalizer
// Expected files   : rstr_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or more strings and, for each argument, puts 
// the last character that is a letter of each word in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// A letter is a character in the set [a-zA-Z]

// If there are no parameters, display \n.

// Examples:

// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A firsT littlE tesT$
// $> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// seconD tesT A littlE biT   moaR compleX$
//    but... thiS iS noT thaT compleX$
//      okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
// $>

#include <unistd.h>

void rstr_capitalizer(char *str)
{
	int i = 0;
	int upper = 0;
	int position = 0;

	while(str[i])
		i++;
	position = i;
	while (i >= 0)
	{
		if(position - 1 == i && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			upper = 1;
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if(upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if(!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			upper = 0;
		}
		else if(str[i] == ' ' || str[i] == '\t')
			upper = 1;
		i--;
	}
	write(1, str, position);
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac > 1)
	{
		while(ac > i)
		{
			rstr_capitalizer(av[i]);
			i++;
		}
	}
	write(1, "\n", 1);
}