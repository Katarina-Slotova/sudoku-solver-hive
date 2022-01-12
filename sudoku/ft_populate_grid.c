/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 17:14:51 by kslotova          #+#    #+#             */
/*   Updated: 2021/09/06 12:29:57 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_create_grid(void)
{
	int a;
	int **grid;

	a = 0;
	grid = (int**)malloc(sizeof(int*) * strlen);
	while (a < strlen)
	{
		grid[a] = (int*)malloc(sizeof(int) * strlen);
		a++;
	}
	return (grid);
}

int		**ft_populate_grid(int argc, char **argv)
{
	int **grid;
	int b;
	int c;

	(void)argc;
	grid = ft_create_grid();
	b = 1;
	c = 0;
	while (b < 10)
	{
		c = 0;
		while (c < 9)
		{
			if (argv[b][c] != '.')
				grid[b - 1][c] = argv[b][c] - '0';
			else
				grid[b - 1][c] = 0;
			c++;
		}
		b++;
	}
	return (grid);
}
