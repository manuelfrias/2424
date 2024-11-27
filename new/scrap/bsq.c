#include <stdio.h>

// Esto lo trairia desde otra funcion
#define ROWS 5
#define COLS 5

// Este es un ejemplo de matriz
char matrix[ROWS][COLS] = {
	{'.', '.', '.', 'X', 'X'},
	{'.', 'X', '.', '.', '.'},
	{'.', '.', '.', '.', '.'},
	{'X', 'X', '.', 'X', '.'},
	{'.', 'X', '.', 'X', '.'}};

// Esta funcion devuelve 1 si el cuadrado esta valido, 0 en caso contrario
int is_square_valid(int row, int col, int size)
{
	// Vemos que no sobrepase el tamano de la matriz
	if (row + size > ROWS || col + size > COLS)
		return 0;

	int i = size;
	while (i > 0)
	{
		// direccion derecha
		int d = 1;
		while (d <= i)
		{
			if (matrix[row][col + d] == 'X')
				d++;
		}
		// direccion abajo

		// direccion izquierda

		// direccion arriba

		i++;
		if (matrix[row + size - 1][col + i] == 'X' ||
			matrix[row + i][col + size - 1] == 'X')
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	// Definimos el tamano maximo encontrado
	int max_size = 0;
	int max_row = -1, max_col = -1;

	// Recorremos la matriz
	int row = 0;
	while (row < ROWS)
	{
		int col = 0;
		while (col < COLS)
		{
			// Si encuentra un '.' es porque puede crear un cuadrado
			if (matrix[row][col] == '.')
			{
				int size = 1;
				// Comprueba que puede hacer un cuadrado
				while (is_square_valid(row, col, size))
				{
					// Si es valido, lo incrementa
					size++;
				}
				size--;

				if (size > max_size)
				{
					max_size = size;
					max_row = row;
					max_col = col;
				}
			}
			col++;
		}
		row++;
	}

	if (max_size > 0)
	{
		printf("El cuadrado mas grande empieza en (%d, %d) con un tamano de %d\n ESTO SE TIENE QUE DEVOLVER O GUARDARLO", max_row + 1, max_col + 1, max_size);
	}
	else
	{
		printf("No se encontro ningun cuadrado\n");
	}

	return 0;
}