#include "src/record.hpp"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string line;
    int sum = 0;
    int count = 0;
    while (std::getline(std::cin, line)) {
        Record r = MakeRecord(line);
        sum += r.price;
        count++;
    }

    // Выводим сумму и количество элементов в сумме
    std::cout << sum << " " << count << std::endl;
    return 0;
}