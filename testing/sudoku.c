// check whether I'm trying to pass in the same number as there already is in the column
// returns 1 or 0, based on whether it is true(yes, I am passing in a num that already is there) or false(no, this number is not there yet)
int column(int **grid, int col, int line, int num)
{
	(void)line;
	int index;
	index = 0;

	while (index < 9)
	{
		if (grid[index][col] == num)
		{
			return(1);
		}
		index++;
	}	
	return (0);	
}

int row(int **grid, int col, int line, int num)
{
	(void)col;
	int index;
	index = 0;

	while (index < 9)
	{
		if (grid[line][index] == num)
		{
			return(1);
		}
		index++;
	}
	return (0);	
}

int square(int **grid, int col, int line, int num)
{
	col = (col/3)*3;
	line = (line/3)*3;

	int x;
	int y;

	x = col;
	while(x < col + 3)
	{	
		y = line;
		while(y < line + 3)
		{			
			if (grid[y][x] == num)
				return(1);
			y++;
		}
		x++;
	}	
	return (0);
}
