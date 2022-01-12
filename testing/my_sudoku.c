// check whether I'm trying to pass in the same number as there already is in the column
// returns 1 or 0, based on whether it is true(yes, I am passing in a num that already is there) or false(no, this number is not there yet)
int column(int **grid, int col, int line, int num);
int row(int **grid, int col, int line, int num);
int square(int **grid, int col, int line, int num);

int column(int **grid, int line, int col, int num)
{
	int index;
	index = 0;

	while (index < 9)
	{
		if (grid[col][index] == num)
		{
			return(1);
		}
		index++;
	}	
	return (0);	
}

int row(int **grid, int line, int col, int num)
{
	int index;
	index = 0;

	while (index < 9)
	{
		if (grid[index][line] == num)
		{
			return(1);
		}
		index++;
	}
	return (0);	
}

int square(int **grid, int col, int line, int num)
{	// CHECKING NUMBERS IN THE ROW OF A SQUARE
	// set col to the beginnig of the square's row after checking the first/sec/third number of the first square
	if (col < 3)
	{
		col = 0;
	}
	// set col to the beginnig of the square's row after checking the first/sec/third number of the second square
	else if (col < 6)
	{
		col = 3;
	}
	// set col to the beginnig of the square's row after checking tthe first/sec/third number of the third square
	else if (col < 9)
	{
		col = 6;
	}

	// CHECKING NUMBERS IN THE COLUMN OF A SQUARE
	// set line to the beginnig of the square's column after checking the first/sec/third number of the first square
	if (line < 3)
	{
		line = 0;
	}
	// set line to the beginnig of the square's column after checking the first/sec/third number of the second square
	else if (line < 6)
	{
		line = 3;
	}
	// set line to the beginnig of the square's column after checking tthe first/sec/third number of the third square
	else if (line < 9)
	{
		line = 6;
	}

	// Loop through all the lines and columns in a square
	int x;
	int y;

	x = line;
	y = col;

	while(x < line + 3)
	{	
		while(y < col + 3)
		{			
			if (grid[col][index] == num)
			{
				return(1);
			}
			index++;
		}
		y++;
	}
	x++;
	return (0);
}


int square(int **grid, int col, int line, int num)
{
	col = (col/3)*3;
	line = (line/3)*3;

	int x;
	int y;

	x = col;
	y = line;
	while(x < col + 3)
	{	
		while(y < line + 3)
		{			
			if (grid[col][x] == num)
				return(1);
		}
		y++;
	}
	x++;
	return (0);
}