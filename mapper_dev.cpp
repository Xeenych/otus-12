#include "src/record.hpp"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string line;
    int sum = 0;
    int count = 0;
    while (std::getline(std::cin, line)) {
        Record r = MakeRecord(line);
        std::cout << r.price << " " << r.price * r.price << std::endl;
    }
    return 0;
}