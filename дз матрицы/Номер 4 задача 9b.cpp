#include<iostream>
#include<array>
#include<time.h>
struct Robot
{
    int power;
    int speed;
};
const int lines = 3;
const int colums = 3;
void func(std::array<std::array<Robot,colums>,lines> dask)
{
    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<colums;j++)
        {
            std::cout<<dask[j][i].power<<";"<<dask[j][i].speed<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    std::array<std::array<Robot,colums>,lines> dask;
    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<colums;j++)
        {
            std::cout<<"Power: ";
            std::cin>>dask[j][i].power;
            std::cout<<"Speed: ";
            std::cin>>dask[j][i].speed;
        }
    }
    std::cout<<std::endl;
    func(dask);
    return 0;
}