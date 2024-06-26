/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_8_sort_list.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:18:31 by tlai              #+#    #+#             */
/*   Updated: 2024/02/23 14:18:47 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};