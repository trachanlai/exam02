/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_16_swap_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:27:50 by tlai              #+#    #+#             */
/*   Updated: 2024/02/12 19:35:58 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100


unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}


// #include <stdio.h>
// int main()
// {
// 	unsigned char test1 = 0b10001000; // Binary representation for testing
// 	unsigned char result1 = swap_bits(test1);
// 	printf("Original: %u, Swapped: %u\n", test1, result1);

// 	unsigned char test2 = 0b01010101; // Binary representation for testing
// 	unsigned char result2 = swap_bits(test2);
// 	printf("Original: %u, Swapped: %u\n", test2, result2);

// 	return 0;
// }

