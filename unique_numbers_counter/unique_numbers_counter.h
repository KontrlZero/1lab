#ifndef UNIQUE_NUMBERS_COUNTER_H
#define UNIQUE_NUMBERS_COUNTER_H

#include <vector>

#ifdef UNIQUE_NUMBERS_COUNTER_EXPORTS
#define UNIQUE_NUMBERS_COUNTER_API __declspec(dllexport)
#else
#define UNIQUE_NUMBERS_COUNTER_API __declspec(dllimport)
#endif

extern "C" {
    UNIQUE_NUMBERS_COUNTER_API int countUniqueNumbers(const std::vector<int>& numbers);
}

#endif // UNIQUE_NUMBERS_COUNTER_H
