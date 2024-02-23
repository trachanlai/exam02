/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_15_print_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:43:27 by tlai              #+#    #+#             */
/*   Updated: 2024/02/12 19:48:03 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"




// https://www.cprogramming.com/tutorial/bitwise_operators.html
/*
Bit lesson:
left shifting is the equivalent of multiplying by a power of two.
*/
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit_position = 7;

	while(bit_position >= 0)
	{
		if((octet >> bit_position) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit_position--;
	}
}

// int main()
// {
//     print_bits(0); // Should print "00000000"
//     write(1, "\n", 1);
//     print_bits(1); // Should print "00000001"
//     write(1, "\n", 1);
//     print_bits(2); // Should print "00000010"
//     write(1, "\n", 1);
//     print_bits(255); // Should print "11111111"
//     write(1, "\n", 1);
//     return 0;
// }