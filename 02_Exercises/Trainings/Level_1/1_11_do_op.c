/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_11_do_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:52:53 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 10:31:52 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : do_op
// Expected files   : do_op.c
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------

// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %

// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.

// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int num1 = 0;
	int num2 = 0;
	int res = 0;

	if (ac == 4)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		if(av[2][0] == '+')
			res = num1 + num2;
		else if(av[2][0] == '-')
			res = num1 - num2;
		else if(av[2][0] == '*')
			res = num1 * num2;
		else if(av[2][0] == '/')
			res = num1 / num2;
		else if(av[2][0] == '%')
			res = num1 % num2;
		printf("%d", res);
	}
	printf("\n");
}









// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>

// int main(int ac, char **av)
// {
// 	int n1 = 0;
// 	int n2 = 0;
// 	int res = 0;

// 	if (ac == 4)
// 	{
// 		n1 = atoi(av[1]);
// 		n2 = atoi(av[3]);
// 		if(av[2][0] == '+')
// 			res = n1 + n2;
// 		else if (av[2][0] == '-')
// 			res = n1 - n2;
// 		else if (av[2][0] == '*')
// 			res = n1 * n2;
// 		else if (av[2][0] == '/')
// 			res = n1 / n2;
// 		else if (av[2][0] == '%')
// 			res = n1 % n2;
// 		printf("%d\n", res);
// 	}
// 	else	
// 		write(1, "\n", 1);
// }