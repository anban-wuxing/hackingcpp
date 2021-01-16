#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::ifstream is{"squares.txt"}; 

    if (is.good())
    {
        double x, y;
        while (is >> x >> y)
        {
            std::cout << x << "² = " << y << "\n";
        }
    }
    return 0;
}
