#include <iostream>

int main()
{
    // defining dimension
    int n = 2, m = 3, p = 4;
    // defining our 3D matrix
    int matrix[n][m][p] =
        {
            {
                {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}
            },
            {
                {12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23}
            }
        };
    // printing the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                std::cout << matrix[i][j][k] << " ";
            }
        }
    }
    std::cout << "\n";
    /*
     *   defining our 1D vector
     *   I take advantage of how the array is represented in memory
     *   since array elemnts are stored sequentially in memory courtesy of ECMA-335
     *   so we point at the first address in memory of our matrix thus we have a 1D vector
     */
    int *vector = &matrix[0][0][0];
    int q = m * n * p;
    // printing the vector
    for (int y = 0; y < q; y++)
    {
        std::cout << vector[y] << " ";
    }
    std::cout << "\n";
    // testing
    //* q is evalueted by the following equation q = i * m * p + (k + j * p)
    for (int i = 0; i < n; i++) // I
    {
        for (int j = 0; j < m; j++) // J
        {
            for (int k = 0; k < p; k++) // K
            {
                if (matrix[i][j][k] == vector[i * m * p + (k + j * p)])
                    continue;
                std::cout << "Wrong Conversion\n";
                return 1;
            }
        }
    }
    std::cout << "Right Conversion\n";
    return 0;
}
