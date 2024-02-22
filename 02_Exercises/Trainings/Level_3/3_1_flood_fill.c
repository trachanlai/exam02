/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_1_flood_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:15:28 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 14:22:36 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : flood_fill
// Expected files   : flood_fill.c
// Allowed functions: -
// --------------------------------------------------------------------------------

// Write a function that takes a char ** as a 2-dimensional array of char, a 
// t_point as the dimensions of this array and a t_point as the starting point.

// Starting from the given 'begin' t_point, this function fills an entire zone 
// by replacing characters inside with the character 'F'. A zone is an group of 
// the same character delimitated horizontally and vertically by other characters
// or the array boundry.

// The flood_fill function won't fill diagonally.

// The flood_fill function will be prototyped like this:
//   void  flood_fill(char **tab, t_point size, t_point begin);

// The t_point structure is prototyped like this: (put it in flood_fill.c)

//   typedef struct  s_point
//   {
//     int           x;
//     int           y;
//   }               t_point;

// Example:

// $> cat test.c
// #include <stdlib.h>
// #include <stdio.h>

// char** make_area(char** zone, t_point size)
// {
// 	char** new;

// 	new = malloc(sizeof(char*) * size.y);
// 	for (int i = 0; i < size.y; ++i)
// 	{
// 		new[i] = malloc(size.x + 1);
// 		for (int j = 0; j < size.x; ++j)
// 			new[i][j] = zone[i][j];
// 		new[i][size.x] = '\0';
// 	}

// 	return new;
// }

// int main(void)
// {
// 	t_point size = {8, 5};
// 	char *zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};

// 	char**  area = make_area(zone, size);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	printf("\n");

// 	t_point begin = {7, 4};
// 	flood_fill(area, size, begin);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	return (0);
// }

// $> gcc flood_fill.c test.c -o test; ./test
// 11111111
// 10001001
// 10010001
// 10110001
// 11100001

// FFFFFFFF
// F000F00F
// F00F000F
// F0FF000F
// FFF0000F
// $> 
// End of exercise



// Define a point structure provided by exercise
typedef struct  s_point
{
	int           x;
	int           y;
}               t_point;



void	flood_fill(char **tab, t_point size, t_point begin)
{
	int x = begin.x;
	int y = begin.y;

	if(x < 0 || x >= size.x || y < 0 || y >= size.y)
		return;
	if(tab[y][x] != '1')
		return;
	tab[y][x] = 'F';
	flood_fill(tab, size, (t_point){x, y -1});
	flood_fill(tab, size, (t_point){x, y +1});
	flood_fill(tab, size, (t_point){x+1, y});
	flood_fill(tab, size, (t_point){x-1, y});
}




// Function to perform flood fill algorithm
// void  flood_fill(char **tab, t_point size, t_point begin)
// {
// 	// Get the x and y coordinates from the starting point
// 	int x = begin.x;
// 	int y = begin.y;

// 	// Base cases:
// 	// If the point is outside the array bounds, return
// 	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
// 		return;
//     // If the character at the point is not the target character, return
// 	if (tab[y][x] != '1')
//         return;

// 	// Replace the character at the point with 'F'
// 	tab[y][x] = 'F';

			// // Create points for the surrounding cells
			// t_point up = {x, y - 1};
			// t_point down = {x, y + 1};
			// t_point left = {x - 1, y};
			// t_point right = {x + 1, y};

			// // Recursively call the function for the surrounding cells
			// flood_fill(tab, size, up);
			// flood_fill(tab, size, down);
			// flood_fill(tab, size, left);
			// flood_fill(tab, size, right);

// Recursively call the function for the surrounding cells
// flood_fill(tab, size, (t_point){x, y - 1});
// flood_fill(tab, size, (t_point){x, y + 1});
// flood_fill(tab, size, (t_point){x - 1, y});
// flood_fill(tab, size, (t_point){x + 1, y});
// }




// Main provided in the exercise
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
