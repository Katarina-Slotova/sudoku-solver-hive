/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:06:18 by kslotova          #+#    #+#             */
/*   Updated: 2021/08/29 19:15:40 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		column(int **grid, int col, int line, int num)
{
	int index;

	(void)line;
	index = 0;
	while (index < 9)
	{
		if (grid[index][col] == num)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

int		row(int **grid, int col, int line, int num)
{
	int index;

	(void)col;
	index = 0;
	while (index < 9)
	{
		if (grid[line][index] == num)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

int		square(int **grid, int col, int line, int num)
{
	int x;
	int y;

	col = (col / 3) * 3;
	line = (line / 3) * 3;
	x = col;
	while (x < col + 3)
	{
		y = line;
		while (y < line + 3)
		{
			if (grid[y][x] == num)
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}
