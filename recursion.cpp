#include <iostream>

int recursiveSum(int m)
{
    if (m == 1)
        return m;
    return m *= recursiveSum(m - 1);
}

// Recursive factorial calculation
int main()
{
    int m = 10; 

    std::cout << recursiveSum(m);

    system("pause>0");
}
