#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

// Funcion auxiliar para escribir mensajes
void write_output(const char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

// Funcion para imprimir la grilla
void print_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int i;
	int j;
	char buffer[2];

	i = 0;
	j = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			if (j == 3)
			{
				buffer[0] = grid[i][j] + '0';
				write(1, buffer, 1);
				j++;
			}
			else
			{
				buffer[0] = grid[i][j] + '0';
				buffer[1] = ' ';
				write(1, buffer, 2);
				j++;
			}
		}
		write(1, "\n", 1);
		i++;
	}
}

// Contar las torres visibles en una fila o columna
int count_visible(int *line, int size)
{
	int max_height;
	int count;
	int i;

	max_height = 0;
	count = 0;
	i = 0;
	while (i < size)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

// Validar la grilla contra las restricciones de visibilidad
int validate_grid(int grid[GRID_SIZE][GRID_SIZE], int *visibility)
{
	int line[GRID_SIZE];
	int i;
	int j;

	i = 0;
	j = 0;
	// Revisar filas desde izquierda hacia derecha
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			line[j] = grid[i][j];
			j++;
		}
		if (count_visible(line, GRID_SIZE) != visibility[i])
			return (0);
		i++;
	}
	// Revisar columnas desde arriba hacia abajo
	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			line[j] = grid[i][GRID_SIZE - 1 - j];
			j++;
		}
		if (count_visible(line, GRID_SIZE) != visibility[GRID_SIZE + i])
			return (0);
		i++;
	}
	// Revisar filas desde derecha hacia izquierda
	j = 0;
	while (j < GRID_SIZE)
	{
		i = 0;
		while (i < GRID_SIZE)
		{
			line[i] = grid[i][j];
			i++;
		}
		if (count_visible(line, GRID_SIZE) != visibility[2 * GRID_SIZE + j])
			return (0);
		j++;
	}
	// Revisar columnas desde abajo hacia arriba
	j = 0;
	while (j < GRID_SIZE)
	{
		i = 0;
		while (i < GRID_SIZE)
		{
			line[i] = grid[GRID_SIZE - 1 - i][j];
			i++;
		}
		if (count_visible(line, GRID_SIZE) != visibility[3 * GRID_SIZE + j])
			return (0);
		j++;
	}
	return (1);
}

// Generar permutaciones de la grilla y validar
int solve(int grid[GRID_SIZE][GRID_SIZE], int *visibility, int row, int col)
{
	int value;
	int valid;
	int k;

	value = 1;
	if (row == GRID_SIZE)
	{
		if (validate_grid(grid, visibility))
		{
			print_grid(grid);
			return (1);
		}
		return (0);
	}
	while (value <= GRID_SIZE)
	{
		valid = 1;
		k = 0;
		// Revisar duplicados en la columna
		while (k < row)
		{
			if (grid[k][col] == value)
			{
				valid = 0;
				break;
			}
			k++;
		}
		// Revisar duplicados en la fila
		k = 0;
		while (k < col)
		{
			if (grid[row][k] == value)
			{
				valid = 0;
				break;
			}
			k++;
		}
		if (valid)
		{
			grid[row][col] = value;
			if (col == GRID_SIZE - 1)
			{
				if (solve(grid, visibility, row + 1, 0))
					return (1);
			}
			else
			{
				if (solve(grid, visibility, row, col + 1))
					return (1);
			}
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	int		grid[GRID_SIZE][GRID_SIZE];
// 	int		i;
// 	int		j;
// 	int*	visibility;
// 	char*	input;

// 	visibility = (int *)malloc(GRID_SIZE * GRID_SIZE * sizeof(int));
// 	if (argc != 2)
// 	{
// 		write_output("Uso: ./rush-01 \"<16 valores de visibilidad>\"\n");
// 		return (1);
// 	}
// 	// if (!visibility)
// 	// {
// 	//     write_output("Error: Memoria no disponible.\n");
// 	//     return 1;
// 	// }
// 	i = 0;
// 	// Pasar los valores de visibilidad
// 	input = argv[1];
// 	while (i < GRID_SIZE * GRID_SIZE)
// 	{
// 		visibility[i] = input[i * 2] - '0';
// 		// if (visibility[i] < 1 || visibility[i] > GRID_SIZE)
// 		// {
// 		//     write_output("Error: Visibilidad invalida.\n");
// 		//     free(visibility);
// 		//     return 1;
// 		// }
// 		i++;
// 	}
// 	// Inicializar grilla
// 	i = 0;
// 	while (i < GRID_SIZE)
// 	{
// 		j = 0;
// 		while (j < GRID_SIZE)
// 		{
// 			grid[i][j] = 0;
// 			j++;
// 		}
// 		i++;
// 	}
// 	// Resuelve e imprime
// 	if (!solve(grid, visibility, 0, 0))
// 	{
// 		write_output("Error\n");
// 	}
// 	free(visibility);
// 	return (0);
// }
