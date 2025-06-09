#pragma once

#include <iostream>
#include <istream>
#include <sstream>
#include <string>

struct Record {
    int price;
};

inline Record MakeRecord(std::string& str) {
    std::istringstream is{str};

    std::string field;
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');
    std::getline(is, field, ',');  // price

    std::istringstream price_field{field};
    Record ret{};
    price_field >> ret.price;
    return ret;
}