#include <iostream>

bool check_matrix(int a[][4], int b[][4]);
void matrix_reduction(int a[][4]);

int main()
{
    int a[4][4];
    int b[4][4];

    std::cout << "Fill the matrixes:\n";
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << "Matrix field " << i << " " << j << std::endl;
            std::cout << "Matrix A: ";
            std::cin >> a[i][j];
            std::cout << "Matrix B: ";
            std::cin >> b[i][j];
        }
        
    }
    if (check_matrix(a, b))
    {
        matrix_reduction(a);

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                std::cout << a[i][j] << " ";
            }
            std::cout << std::endl;
        }

    }
    else
    {
        std::cout << "Matrices are not equal!" << std::endl;
    }
    
}

bool check_matrix(int a[][4], int b[][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                return false;
            }
        }
        
    }
    return true;
}

void matrix_reduction(int a[][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if(i != j)
            {
                a[i][j] = 0;
            }
            
        }
    }
}
