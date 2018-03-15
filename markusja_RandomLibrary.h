#ifndef MARKUSJA_RANDOMLIBRARY_LIBRARY_H
#define MARKUSJA_RANDOMLIBRARY_LIBRARY_H


#include <iostream>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif
namespace mjRandomLib{
    static std::string randomFloatNumber(double min, double max);

    static std::string randomIntNumber(int scale);

    static std::string randomIntNumberAsString(int min, int max);

    static int randomIntNumberAsInt(int min, int max);

    static std::list<std::string>::iterator
    randomIterator(std::list<std::string>::iterator start, std::list<std::string>::iterator end);
}

#ifdef __cplusplus
}
#endif

#endif