#include <fstream>

int main(){
    std::ofstream os{"squares.txt"};

    if(os.good()){
        double x,y;
        for(int x = 1; x <= 6; ++x){
            os << x << ' ' << (x*x) << '\n';
        }
    }
}