#include<iostream>
#include<array>
#include<time.h>
int func(std::array<std::array<int,10>,10> matrix)
{
    int summ = 0;
    int i=0;
    int j=0;
    while(i<10){
        if(matrix[i][j]<0)
            summ+=matrix[i][j];
        i++;
        j++;
    }
    return summ;
}
int main()
{
    const int line = 10;
    const int column = 10;
    srand(time(0));
    std::array<std::array<int,line>,column> matrix;
    for(int i=0;i<column;i++){
        for(int j=0;j<line;j++){
            matrix[i][j] = rand()%20 - 10;
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"Summ = "<<func(matrix)<<std::endl;
    return 0;
}