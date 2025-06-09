#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
    int sum = 0;
    int count = 0;

    std::string line;
    while (std::getline(std::cin, line)) {
        int s = 0;
        int c = 0;
        std::istringstream is{line};
        is >> s >> c;
        sum += s;
        count += c;
    }

    float avg = static_cast<float>(sum) / count;
    std::cout << avg << std::endl;
    return 0;
}