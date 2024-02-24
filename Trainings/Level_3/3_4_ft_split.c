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
#include <stdio.h>

// This function copies n characters from string s2 to s1
char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	// Copy each character from s2 to s1 until n characters are copied or end of s2 is reached
	while (++i < n && s2[i])
		s1[i] = s2[i];
	// Add null character at the end
	s1[i] = '\0';
	return (s1);
}

// This function splits a string into words
char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0; // word count
	// Count the number of words in the string
	while (str[i])
	{
		// Skip spaces, tabs, and newlines
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		// If a character is found, increment word count
		if (str[i])
			wc++;
		// Skip the characters of the word
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	// Allocate memory for the output array of words
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	// Split the string into words
	while (str[i])
	{
		// Skip spaces, tabs, and newlines
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		// Find the end of the word
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		// If a word is found
		if (i > j)
		{
			// Allocate memory for the word and copy it into the output array
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	// Add NULL at the end of the output array
	out[k] = NULL;
	return (out);
}

int main()
{
	char *str = "Hello World 123.    88.  5";
	char **out = ft_split(str);
	int i = 0;
	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return 0;
}
