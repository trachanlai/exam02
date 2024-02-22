/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_4_ft_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:13:31 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 20:03:37 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);


#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		while (*str && is_delimiter(*str))
			str++;
		if (*str && !is_delimiter(*str))
		{
			count++;
			while (*str && !is_delimiter(*str))
				str++;
		}
	}
	return count;
}

// Function to split a string into words
char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int words = count_words(str);
	char **result = malloc((words + 1) * sizeof(char *));

	while (i < words)
	{
		// Allocate memory for the word
		result[i] = malloc(1000 * sizeof(char));
		// Skip delimiters
		while (*str && is_delimiter(*str))
			str++;
		// Copy the word to the array
		while (*str && !is_delimiter(*str))
			result[i][j++] = *str++;
		result[i][j] = '\0'; // Null-terminate the word
		i++;
		j = 0; // Reset the index for the next word
	}
	result[i] = NULL; // Null-terminate the array
	return result;
}


// #include <stdio.h>

// int main()
// {
// 	char **words;
// 	char str[] = "Hello, this is a test string.";
// 	int i = 0;

// 	words = ft_split(str);

// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]); // Don't forget to free the memory
// 		i++;
// 	}
// 	free(words); // Free the array itself

// 	return 0;
// }


#include <stdlib.h>

// Function to check if a character is a delimiter
int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

// Function to count the number of words in a string
int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		// Skip delimiters
		while (*str && is_delimiter(*str))
			str++;
		// If the current character is not a delimiter, it's the start of a word
		if (*str && !is_delimiter(*str))
		{
			count++;
			// Skip the word
			while (*str && !is_delimiter(*str))
				str++;
		}
	}
	return count;
}

// Function to split a string into words
char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int words = count_words(str);
	char **result = malloc((words + 1) * sizeof(char *));

	while (i < words)
	{
		// Allocate memory for the word
		result[i] = malloc(256 * sizeof(char));
		// Skip delimiters
		while (*str && is_delimiter(*str))
			str++;
		// Copy the word to the array
		while (*str && !is_delimiter(*str))
			result[i][j++] = *str++;
		result[i][j] = '\0'; // Null-terminate the word
		i++;
		j = 0; // Reset the index for the next word
	}
	result[i] = NULL; // Null-terminate the array
	return result;
}