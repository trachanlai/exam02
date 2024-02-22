/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:58:51 by galpers           #+#    #+#             */
/*   Updated: 2024/02/07 17:30:14 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 4)
	{
		// Check if the second argument is a single letter
		if(((argv[2][0] >= 'a' && argv[2][0]<= 'z') || (argv[2][0] >= 'A' && argv[2][0]<= 'Z')) && argv[2][1] == '\0')
		{
			// Check if the third argument is a single letter
			if (((argv[3][0] >= 'a' && argv[3][0]<= 'z') || (argv[3][0] >= 'A' && argv[3][0]<= 'Z')) && argv[3][1] == '\0')
			{
				// Loop through each character of the first string
				while (argv[1][i] != '\0')
				{
					// If the current character is equal to the second argument, replace it with the third argument
					if (argv[1][i] == argv[2][0])
						argv[1][i] = argv[3][0];
					write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
