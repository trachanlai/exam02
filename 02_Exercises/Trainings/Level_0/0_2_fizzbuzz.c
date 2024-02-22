/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_2_fizzbuzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:24:38 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 17:54:00 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $> 

#include <unistd.h>

int main(void)
{
	int i = 1;
	int k;
	int l;

	while(i <= 100)
	{
		if((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i >= 10)
		{
			k = i / 10 + '0';
			l = i % 10 + '0';
			write(1, &k, 1);
			write(1, &l, 1);
		}
		else if(i < 10)
		{
			k = i + '0';
			write(1, &k, 1); 
		}
		write(1, "\n", 1);
		i++;
	}
}













// #include <unistd.h>

// int main (void)
// {
// 	int i;
// 	int k;
// 	int l;

// 	i = 1;
// 	while (i <= 100)
// 	{
// 		if ((i % 3 == 0) && (i % 5 == 0))
// 			write(1, "fizzbuzz", 8);
// 		else if ((i % 3 == 0))
// 			write(1, "fizz", 4);
// 		else if ((i % 5 == 0))
// 			write(1, "buzz", 4);
// /*
// splits the number into two digits and converts each digit into a character
//  (since write function requires a character or a string). 
//  This is done by dividing i by 10 for the first digit and 
//  getting the remainder of i divided by 10 for the second digit. 
//  Then, it adds '0' to each digit to convert it to the corresponding ASCII character. 
//  The write function is then used to print each digit.
// */
// 		else if (i > 10)
// 		{
// 			k = i / 10 + '0';
// 			l = i % 10 + '0';
// 			write(1, &k, 1);
// 			write(1, &l, 1); 
// 		}
// 		else if (i <= 10)
// 		{
// 			k = i + '0';
// 			write(1, &k, 1);
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }
