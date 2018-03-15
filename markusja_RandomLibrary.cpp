#include "markusja_RandomLibrary.h"

#include <iostream>
#include <random>

std::string mjRandomLib::randomFloatNumber(double min, double max) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(min, max);

    auto number = dist(mt);

    return std::to_string(number);
}

int mjRandomLib::randomIntNumberAsInt(int min, int max) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dist(min, max);

    auto number = dist(mt);

    return number;
}

std::string mjRandomLib::randomIntNumberAsString(int min, int max) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dist(min, max);

    auto number = dist(mt);

    return std::to_string(number);
}

std::string mjRandomLib::randomIntNumber(int scale) {
    auto number = std::rand() % (9 * static_cast<uint64_t>(std::pow(10.0, scale))) + static_cast<int64_t>(std::pow(10.0, scale));

    return std::to_string(number);
}

std::list<std::string>::iterator mjRandomLib::randomIterator(std::list<std::string>::iterator start, std::list<std::string>::iterator end) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dist(0, std::distance(start, end) - 1);

    std::advance(start, dist(mt));
    return start;
}
