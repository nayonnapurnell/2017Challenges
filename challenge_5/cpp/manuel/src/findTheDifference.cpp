#include <limits.h> // For INT_Min
#include <string>
<<<<<<< HEAD
#include "findTheDifference.h"
=======
#include "include/findTheDifference.h"
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff

int findMax (std::string str) {

    int max = INT_MIN;
<<<<<<< HEAD

    for(int i = 0; i < str.length(); i++) {
=======
    int length = str.length();

    for(int i = 0; i < length; i++) {
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff
        if(str[i] > max) {
            max = str[i];
        }
    }

    return max;
}

