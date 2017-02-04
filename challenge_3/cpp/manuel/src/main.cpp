#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include "majorityElement.h"
=======
#include "include/majorityElement.h"
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff

int main(int argc, char **argv) {

    std::string input; // will contain a string of numbers

<<<<<<< HEAD
    int lines; // the numbers of strings expected as input
    std::cin >> lines;
    std::cin.ignore(); // ignore trailing \n

    std::vector<int> numbers;

    // for every testcase
    for(int i = 0; i < lines; i++) {

        std::getline(std::cin, input);

        // Array of numbers
        numbers = stringToDigits(input);
        int length = numbers.size();

        //max value in array
        int max = findMax(numbers);

        // count array to determine majority element
        int *count = new int[max + 1]();

        for(int i = 0; i < length; i++) {
            count[numbers[i]] += 1;
        }

        int majorityElement = 0;
        while(count[majorityElement] <= length/2) {
            majorityElement++;
        }

        std::cout << majorityElement << std::endl;
        
        delete[] count;
    }
=======
    std::vector<int> numbers;

    std::getline(std::cin, input);

    // Array of numbers
    numbers = stringToDigits(input);
    int length = numbers.size();

    //max value in array
    int max = findMax(numbers);

    // count array to determine majority element
    int *count = new int[max + 1]();

    for(int i = 0; i < length; i++) {
        count[numbers[i]] += 1;
    }

    for(int i = 0; i <= max; i++) {
        if( count[i] > length/2) {
            std::cout << i << std::endl;
            break;
        }
    }

    delete[] count;

>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff
    return 0;
}
