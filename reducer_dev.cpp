#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
    int64_t sum = 0;     // сумма
    int64_t sum_sq = 0;  // сумма квадратов
    int count = 0;

    std::string line;
    while (std::getline(std::cin, line)) {
        int val = 0;  // значение
        int sq = 0;   // квадрат
        std::istringstream is{line};
        is >> val >> sq;
        sum += val;
        sum_sq += sq;
        count += 1;
    }

    // variance = avg<x*x> - avg<x>*avg<x>
    float avg = static_cast<float>(sum) / count;
    float avg_sq = static_cast<float>(sum_sq) / count;

    float var = avg_sq - (avg * avg);
    std::cout << std::sqrt(var) << std::endl;
    return 0;
}