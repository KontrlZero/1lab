#include "unique_numbers_counter.h"
#include <unordered_set>

extern "C" {
    UNIQUE_NUMBERS_COUNTER_API int countUniqueNumbers(const std::vector<int>& numbers) {
        std::unordered_set<int> uniqueNumbers(numbers.begin(), numbers.end());
        return static_cast<int>(uniqueNumbers.size());
    }
}
