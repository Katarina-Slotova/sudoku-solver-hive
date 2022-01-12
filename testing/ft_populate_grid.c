/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 17:14:51 by kslotova          #+#    #+#             */
/*   Updated: 2021/08/29 17:30:40 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int**		ft_create_grid(void)
{
	int **grid;
	grid = (int**)malloc(sizeof(int*) * 9);
 
	int a;
	a = 0;
	while (a < 9)
	{
		grid[a] = (int*)malloc(sizeof(int) * 9);
		a++;
	}
	return(grid);
}
	
int**		ft_populate_grid(int argc, char **argv)
{
	(void)argc;
	int **grid;
	grid = ft_create_grid();

	int b;
	int c;
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
	return(grid);
}
