/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_10_pgcd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:40:19 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 18:19:17 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : pgcd
// Expected files   : pgcd.c
// Allowed functions: printf, atoi, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes two strings representing two strictly positive
// integers that fit in an int.

// Display their highest common denominator followed by a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.

// Examples:

// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e 
// 1$
// $> ./pgcd | cat -e
// $


#include <stdio.h>
#include <stdlib.h>

unsigned int pgcd(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return(0);
	unsigned int n;
	if (a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(a % n == 0 && b % n == 0)
			return(n);
		n--;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return(0);
}




// #include <stdio.h>
// #include <stdlib.h>

// unsigned int	pgcd(unsigned int a, unsigned int b)
// {
// 	if (a == 0 || b == 0)
// 		return(0);
// 	unsigned int n;
// 	if(a > b)
// 		n = a;
// 	else
// 		n = b;
// 	while(1)
// 	{
// 		if(a % n == 0 && b % n == 0)
// 			return(n);
// 		n--;
// 	}
// }

// int		main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
// 	printf("\n");
// 	return (0);
// }
