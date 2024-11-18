#include <unistd.h>
#include <stdlib.h>
#define GRID_SIZE 4

void write_output(const char *str);
int solve(int grid[GRID_SIZE][GRID_SIZE], int *visibility, int row,
		  int col);

// Inicializar grilla
void init_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int i;
	int j;
	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int grid[GRID_SIZE][GRID_SIZE];
	int i;
	int *visibility;
	char *input;

	visibility = (int *)malloc(GRID_SIZE * GRID_SIZE * sizeof(int));
	if (argc != 2)
		return (1);
	i = 0;
	// Pasar los valores de visibilidad
	input = argv[1];
	while (i < GRID_SIZE * GRID_SIZE)
	{
		visibility[i] = input[i * 2] - '0';
		i++;
	}
	init_grid(grid);
	// Resuelve e imprime
	if (!solve(grid, visibility, 0, 0))
	{
		write_output("Error\n");
	}
	free(visibility);
	return (0);
}
