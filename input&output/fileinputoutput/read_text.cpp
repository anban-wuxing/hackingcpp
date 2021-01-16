#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::ifstream is{"squares.txt"}; // open file

    // if stream OK = file readable
    if (is.good())
    {
        double x, y;
        // as long as any 2 values readable
        while (is >> x >> y)
        {
            // print pairs (x,y)
            std::cout << x << "² = " << y << "\n";
        }
    }
    return 0;
}
