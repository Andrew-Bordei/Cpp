#include <iostream>
#include <vector>

void work(int& x)
{
    x++;
}

void work(std::vector<int>& data)
{
    data[0] = 1000;
}

int main()
{
    /*int a = 5; 
    int& b = a; */
    std::vector<int> data = { 10,10,30,50,40,70,100,20 };

    std::cout << data[0] << std::endl;
    work(data);
    std::cout << data[0] << std::endl;

    system("pause>0");
}

