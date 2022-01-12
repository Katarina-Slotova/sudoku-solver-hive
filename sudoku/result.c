/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:05:30 by kslotova          #+#    #+#             */
/*   Updated: 2021/08/29 19:44:43 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		column(int **grid, int col, int line, int num);
int		row(int **grid, int col, int line, int num);
int		square(int **grid, int col, int line, int num);
int		result(int **grid, int col, int line);

int		ft_put_number(int **grid, int col, int line, int num)
{
	if (!square(grid, line, col, num) && !column(grid, line, col, num)
	&& !row(grid, line, col, num))
	{
		grid[col][line] = num;
		if (result(grid, col, line) == 1)
			return (1);
	}
	return (0);
}

int		result(int **grid, int col, int line)
{
	int num;

	num = 1;
	while (grid[col][line] != 0)
	{
		if (col < 8)
			col++;
		else
		{
			if (line++ < 8)
				col = 0;
			else
				return (1);
		}
	}
	while (num < 10)
	{
		if (ft_put_number(grid, col, line, num) == 1)
			return (1);
		num++;
	}
	grid[col][line] = 0;
	return (0);
}
