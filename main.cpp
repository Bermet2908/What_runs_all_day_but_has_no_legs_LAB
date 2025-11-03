#include <iostream>
#include <ctime>
#include "src/timer.hpp"

int main() {
    Timer t;
    t.start();

    std::time_t start = std::time(nullptr);
    while (std::time(nullptr) - start < 3) {
    }

    t.stop();

    std::cout << "Elapsed: " << t.elapsed() << " seconds\n";
    return 0;
}

