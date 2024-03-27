#include <iostream>
#include <random>

int main() {
    std::random_device rd; // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_int_distribution<> distr(0, 100); // Define the range

    for(int n=0; n<10; ++n)
        std::cout << distr(gen) << ' '; // Generate and print 10 random numbers
    std::cout << std::endl;

    return 0;
}