#include <iostream>
#include <vector>
using namespace std;
/*
 *   some languages doesn't allow the previous solution or doesn't have pointers
 *   so this is an O(n) iterative solution works for any programming language
*/
void flattenArrayIterative(const 
vector<vector<vector<int>>> &matrix, vector<int> &vector1D)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            for (int k = 0; k < matrix[i][j].size(); k++)
            {
               vector1D.push_back(matrix[i][j][k]);
            }
        }
    }
}
int main()
{
    //defining our 3D matrix it will be an inconsistent matrix
    //* Note the solution works also if the array is consistent
    vector<vector<vector<int>>> matrix = 
    {
        {
            {1, 2}, {3, 4}
        },
        {
            {5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12},
            {13, 14, 15}
        }
    };
    //printing our matrix in order
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            for (int k = 0; k < matrix[i][j].size(); k++)
            {
                std::cout << matrix[i][j][k] << " ";
            }
        }
    }
    std::cout << "\n";
    //defining our vector
    vector<int> vector;
    //calling the flat function which I defined up
    flattenArrayIterative(matrix, vector);
    // printing the vector
    for (int y = 0; y < vector.size(); y++)
    {
        std::cout << vector[y] << " ";
    }
    std::cout << "\n";
    // testing
    int y = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            for (int k = 0; k < matrix[i][j].size(); k++)
            {
                if (matrix[i][j][k] == vector[y++])
                    continue;
                std::cout << "Wrong Conversion\n";
                return 1;
            }
        }
    }
    std::cout << "Right Conversion\n";
    return 0;
}