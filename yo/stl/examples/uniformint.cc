#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main() 
{ 
    std::mt19937 engine(time(0)); 
    std::uniform_int_distribution<> dist(100, 200); 

    for (size_t idx = 0; idx < 10; ++idx)
        std::cout << "a random value: " << dist(engine) << "\n";

    cout << '\n' <<
        dist.min() << " " << dist.max() << '\n';
} 




