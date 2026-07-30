#include <stdio.h>

int main()
{

    /**
     * 2D array
     * 2 rows
     * 3 columns
     **/
    int numbers[2][3] = {{1, 2}, {4, 5, 6}};
    printf("%d\n", numbers[1][1]);

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    matrix[0][0] = 9;

    printf("%d\n", matrix[0][0]);

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    /**
     * 3D array
     * 2 layers
     * 2 rows
     * 3 columns
     **/
    int three_Dimensional[2][2][3] = {
        {
            {1, 2}, {3, 4, 5}
        },
        {
            {6, 7}, {8, 9, 0}
        }
    };
    printf("%d\n", three_Dimensional[0][0][0]);

    return 0;
}