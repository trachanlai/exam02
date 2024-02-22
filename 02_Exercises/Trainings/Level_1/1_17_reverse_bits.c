/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_17_reverse_bits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:36:24 by tlai              #+#    #+#             */
/*   Updated: 2024/02/12 20:14:20 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int bit_position = 7;

	while(bit_position >= 0)
	{
		if((octet >> bit_position) & 1)
			result |= 1 << (7 - bit_position);
		bit_position--;
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
//     unsigned char test1 = 0b00000001; // Binary representation for testing
//     unsigned char result1 = reverse_bits(test1);
//     printf("Original: %u, Reversed: %u\n", test1, result1);

//     unsigned char test2 = 0b01010101; // Binary representation for testing
//     unsigned char result2 = reverse_bits(test2);
//     printf("Original: %u, Reversed: %u\n", test2, result2);

//     return 0;
// }





// Solution
// unsigned char reverse_bits(unsigned char octet)
// {
// 	unsigned char result = 0;
// 	int bit_position = 7;

// 	while (bit_position >= 0)
// 	{
// 		if ((octet >> bit_position) & 1)
// 			result |= 1 << (7 - bit_position);
// 		bit_position--;
// 	}
// 	return result;
// }
