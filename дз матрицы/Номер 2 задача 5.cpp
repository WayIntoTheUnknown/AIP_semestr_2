#include<iostream>
#include<array>
#include<time.h>
void func(std::array<std::array<int,4>,4> matrix)
{
    int value = 11;
    int line = 4;
    int column = 4;
    int j = 0;
    int i = 0;
    int pos_i_min;
    while(i<line)
    {
        for(j=0;j<column;j++)
        {
            if(matrix[i][j]<value)
            {
                value = matrix[i][j];
                pos_i_min = j;
            }
        }
        matrix[i][pos_i_min] = matrix[i][i];
        matrix[i][i] = value;
     i++;
     value = 11;
    }
    for(int b =0;b<line;b++)
    {
        for(int a=0;a<column;a++)
        {
            std::cout<<matrix[b][a]<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    const int line = 4;
    const int column = 4;
    srand(time(0));
    std::array<std::array<int,line>,column> matrix;
    for(int i=0;i<line;i++){
        for(int j=0;j<column;j++){
            matrix[i][j] = rand()%20 - 10;
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl
             <<std::endl
             <<std::endl;
    func(matrix);
    return 0;
}