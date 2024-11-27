#include <stdio.h>
#define ROWS 5
#define COLS 5

char matrix[ROWS][COLS] = {
    {'.', '.', '.', 'X', 'X'},
    {'.', 'X', '.', '.', '.'},
    {'.', '.', '.', '.', '.'},
    {'X', 'X', '.', 'X', '.'},
    {'.', 'X', '.', 'X', '.'}};

// Preuba si es un cuadrado válido, recibe coordenadas y tamaño del cuadrado
int is_square_valid(int row, int col, int size)
{
    if (row + size > ROWS || col + size > COLS)
        return 0;

    int i = 0;

    // Chequea el lado abajo
    while (i < size)
    {
        if (matrix[row + size - 1][col + i] == 'X')
            return 0;
        i++;
    }

    i = 0;
    // Chequea el lado derecho
    while (i < size)
    {
        if (matrix[row + i][col + size - 1] == 'X')
            return 0;
        i++;
    }

    i = 0;
    // Chequea el lado de arriba
    while (i < size)
    {
        if (matrix[row][col + i] == 'X')
            return 0;
        i++;
    }

    i = 0;

    // Chequea el lado izquierdo
    while (i < size)
    {
        if (matrix[row + i][col] == 'X')
            return 0;
        i++;
    }

    // Si paso todas las pruebas, el cuadrado es válido
    return 1;
}

void attempt_square(int row, int col, int size)
{
    printf("Se intento encontrar un cuadrado de tamaño %d en la posición (%c%d)\n", size, 'A' + col, row + 1);

    while (size > 1)
    {
        if (is_square_valid(row, col, size))
        {
            printf("Se encontró un cuadrado de tamaño %d en la posición (%c%d)\n", size, 'A' + col, row + 1);
            return;
        }
        else
        {
            printf("No se encontró un cuadrado de tamaño %d en la posición (%c%d)\n", size, 'A' + col, row + 1);
            // Preueba un cuadrado de tamaño menor
            size--;
        }
    }

    // Si salio un cuadrado de tamaño 1, imprime un mensaje de error
    printf("Error: Cuadrado muy pequeno (%c%d)\n", 'A' + col, row + 1);
}

int main()
{
    int row = 0;
    int col = 0;
    int size = 5;

    attempt_square(row, col, size);

    return 0;
}
