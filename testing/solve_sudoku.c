int result(int **grid, int col, int line)
{
	int number;

	number = 1;
	while (grid[col][line] != 0)
	{
		if (col < 8)
		{
			col++;
		}
		else 
		{
			col = 0;
			line++;
		}
	}

	if (grid[col][line] == 0)
	{
		while (number < 10)
		{
			//check whether the number I want to pass in to the place with the zero isn't yet in the square
			//check whether the number I want to pass in to the place with the zero isn't yet in the column
			//check whether the number I want to pass in to the place with the zero isn't yet in the line
			if (!square(int **grid, int col, int line, int num) && !column(int **grid, int col, int line, int num) && !row(int **grid, int col, int line, int num))
			{
				grid[col][line] = number;
				// solve the sudoku and give the result, return 1 if sudoku was successfuly solved
					if (result(col, line))
					{
						return (1);
					}
			}
			// try the same thing while passing in the next number, that might replace the zero			
			number++;
		}
	}
	// set the grid[col][line] back to 0, in case I need to go back to fix the number I put previously, but was not correct
	grid[col][line] = 0;
	return (0);
}

