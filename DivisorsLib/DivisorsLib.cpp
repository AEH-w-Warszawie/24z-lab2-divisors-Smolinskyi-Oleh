#include <iostream>
#include <vector>
#include "Divisors.h"
#include <algorithm> // For std::sort

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;

    // Loop from 1 to sqrt(number)
    for (unsigned long long i = 1; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i); // Add the divisor
            if (i != number / i)
            {
                result.push_back(number / i); // Add the corresponding divisor
            }
        }
    }

    // Sort the result to ensure it's in ascending order
    std::sort(result.begin(), result.end());

    return result;
}
