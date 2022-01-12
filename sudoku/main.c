/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:03:46 by akoykka           #+#    #+#             */
/*   Updated: 2021/08/29 20:24:04 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		result(int **grid, int col, int line);
int		**ft_populate_grid(int argc, char **argv);
void	ft_print(int **grid);

int		main(int argc, char **argv)
{
	int		**grid;

	if (argc < 10 || argc > 10)
	{
		ft_putchar('E');
		ft_putchar('r');
		ft_putchar('r');
		ft_putchar('o');
		ft_putchar('r');
		ft_putchar('\n');
		return (0);
	}
	grid = ft_populate_grid(argc, argv);
	result(grid, 0, 0);
	ft_print(grid);
}
