{
	int i;

	for (i = 0; index < height; index++)
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
