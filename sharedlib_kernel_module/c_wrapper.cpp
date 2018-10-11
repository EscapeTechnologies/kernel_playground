// Created By: Vineeth Yeevani
// Date: 10/10/2018
// Description: C wrapper for C++ code

#include "reverse.h"
#include <string>
#include <algorithm>

extern "C" {

void reverse(char const* in, char* out, unsigned len)
{
    std::string s{in, len};
    std::reverse(s.begin(), s.end());
    std::copy(s.begin(), s.end(), out);
}

}
