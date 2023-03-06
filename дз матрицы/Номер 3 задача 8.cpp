#include<iostream>
#include<array>
#include<time.h>
int func(std::array<std::array<int,7>,2> matrix){
    int max_moshnost = -1;
    for(int i=0;i<7;i++)
    {
        if(matrix[1][i] == 3)
        {
            if(matrix[0][i]>max_moshnost)
            {
                max_moshnost = matrix[0][i];
            }
        }
    }
    return max_moshnost;
}
int main()
{
    const int linn = 2;
    const int column = 7;
    srand(time(0));
    std::array<std::array<int,column>,linn> matrix;
        for(int i=0;i<column;i++){
            matrix[0][i] = rand()%10;
            std::cout<<matrix[0][i]<<" ";
        }
        std::cout<<std::endl;
        for(int j=0;j<column;j++){
            matrix[1][j] = rand()%3 + 1;
            std::cout<<matrix[1][j]<<" ";
        }
    std::cout<<std::endl
             <<std::endl
             <<std::endl;
    std::cout<<func(matrix)<<std::endl;
    return 0;
}