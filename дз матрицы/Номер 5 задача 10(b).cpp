#include<iostream>
#include<array>
#include<time.h>
#include<cmath>

const int columns = 3;
const int lines = 3;

void func(std::array<std::array<int, columns>, lines> matrix)
{
    int num_max;
    std::array<int, 3> arr;

    for (int i = 0; i < lines; i++)
    {
        num_max = 0;

        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] > num_max)
            {
                num_max = matrix[i][j];
            }
        }
        arr[i] = num_max;
    }

    for (int a = 0; a < 3; a++)
    {
        std::cout << arr[a] << " ";
    }

    std::cout << std::endl;
}

int normal(std::array<std::array<int, columns>, lines> matrix)
{
    std::array<int, 3> summ;
    int num_summ;
    int num_max = -1;
    for (int i = 0; i < lines; i++)
    {
        num_summ = 0;
        for (int j = 0; j < columns; j++)
        {
            num_summ += abs(matrix[j][i]);
        }
        summ[i] = num_summ;
    }

    for (int a = 0; a < 3; a++)
    {
        if (summ[a] > num_max)
        {
            num_max = summ[a];
        }
    }

    return num_max;
}

int main()
{
    srand(time(0));

    std::array<std::array<int, columns>, lines> matrix;

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % 5;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    func(matrix);
    std::cout << std::endl;

    std::cout << "Normal: " << normal(matrix) << std::endl;

    return 0;
}