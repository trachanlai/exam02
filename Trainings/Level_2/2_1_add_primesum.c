// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   2_1_add_primesum.c                                 :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/14 15:20:32 by tlai              #+#    #+#             */
// /*   Updated: 2024/02/14 16:37:54 by tlai             ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

void ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int prime_sum(int n)
{
	int i;
	int sum = 0;

	while(n > 1)
	{
		i = 2;
		while(i * i <= n)
		{
			if(n %i == 0)
				break;
			i++;
		}
		if(i * i > n)
			sum += n;
		n--;
	}
	return(sum);
}

int ft_atoi(char *str)
{
	int res = 0;
	
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}	
	return(res);
}

int main(int ac, char **av)
{
	if(ac == 2 && av[1][0] != '-')
		ft_putnbr(prime_sum(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return(0);
}











// #include <unistd.h>

// // Function to print an integer to the console
// void ft_putnbr(int n)
// {
// 	if (n >= 10)
// 		ft_putnbr(n / 10); // Recursively call ft_putnbr if n is greater than 10
// 	char c = (n % 10) + '0';
// 	write(1, &c, 1); // Write the last digit of n to the console
// }

// // Function to calculate the sum of all prime numbers less than or equal to n
// int add_prime_sum(int n)
// {
// 	int sum = 0; // Initialize sum
// 	int i; // Declare variable for loop

// 	while (n > 1) // Loop from n to 1
// 	{
// 		i = 2; // Initialize i
// 		while (i * i <= n) // Check if n is divisible by any number less than or equal to its square root
// 		{
// 			if (n % i == 0) // If n is divisible by i, break the loop
// 				break;
// 			i++;
// 		}
// 		if (i * i > n) // If the loop didn't break, n is a prime number
// 			sum += n; // Add n to the sum
// 		n--; // Decrease n by 1
// 	}
// 	return sum; // Return the sum
// }

// // Function to convert a string to an integer
// int ft_atoi(char *str)
// {
// 	int res = 0; // Initialize result
// 	while (*str >= '0' && *str <= '9') // Loop through each digit in the string
// 	{
// 		res = res * 10 + (*str - '0'); // Add the digit to the result
// 		str++; // Move to the next character in the string
// 	}
// 	return res; // Return the result
// }

// // Main function
// int main(int argc, char **argv)
// {
// 	if (argc == 2 && argv[1][0] != '-') // If there are 2 arguments and the second argument is not negative
// 		ft_putnbr(add_prime_sum(ft_atoi(argv[1]))); // Convert the second argument to an integer, calculate the sum of all prime numbers less than or equal to it, and print the result
// 	else
// 		write(1, "0", 1); // If the arguments are not valid, print 0
// 	write(1, "\n", 1); // Print a newline character
// 	return (0); // Return 0
// }
