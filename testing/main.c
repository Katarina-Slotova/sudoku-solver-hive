/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 17:37:18 by kslotova          #+#    #+#             */
/*   Updated: 2021/08/29 17:39:46 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		result(int **grid, int col, int line);
int**	ft_populate_grid(int argc, char **argv);
void    ft_print(int** grid);

int		main(int argc, char **argv)
{
	int **grid;
	grid = ft_populate_grid(argc, argv);
	result(grid, 0, 0);
	ft_print(grid);
}
