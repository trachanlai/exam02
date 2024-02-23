/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_9_lcm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:34:49 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 18:05:20 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : lcm
// Expected files   : lcm.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function who takes two unsigned int as parameters and returns the 
// computed LCM of those parameters.

// LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
// integer divisible by the both integers.

// A LCM can be calculated in two ways:

// - You can calculate every multiples of each integers until you have a common
// multiple other than 0

// - You can use the HCF (Highest Common Factor) of these two integers and 
// calculate as follows:

// 	LCM(x, y) = | x * y | / HCF(x, y)
  
//   | x * y | means "Absolute value of the product of x by y"

// If at least one integer is null, LCM is equal to 0.

// Your function must be prototyped as follows:

//   unsigned int    lcm(unsigned int a, unsigned int b);


unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return(0);
	unsigned int n;
	if(a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(n % a == 0 && n % b == 0)
			return(n);
		n++;
	}
}



// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	// If either a or b is 0, return 0 because the LCM of 0 and any number is 0
// 	if (a == 0 || b == 0)
// 		return (0);

// 	// Initialize n to the maximum of a and b
// 	unsigned int n;
// 	if (a > b)
// 		n = a;  // If a is greater than b, set n to a
// 	else
// 		n = b;  // If b is greater than or equal to a, set n to b
// 	// Start an infinite loop
// 	while (1)
// 	{
// 		// If n is divisible by both a and b, it is a common multiple
// 		if (n % a == 0 && n % b == 0)
// 			return (n);  // Return n because it is the least common multiple
// 		// If n is not a common multiple, increment n and continue the loop
// 		n++;
// 	}
// }

#include <stdio.h>

int main(void)
{
	printf("%u\n", lcm(8, 3));
}
