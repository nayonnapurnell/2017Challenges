#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include "treeInversion.h"
=======
#include "include/treeInversion.h"
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff

int main(int argc, char **argv) {

    std::string input; // will contain a string of numbers

    int lines; // the numbers of strings expected as input
    std::cin >> lines;
    std::cin.ignore(); // ignore trailing \n

    std::vector<int> numbers;

    // for every testcase
    for(int i = 0; i < lines; i++) {
        std::cout << "\nTestcase: " << i + 1 << std::endl;

        std::getline(std::cin, input);

        // Array of numbers
        numbers = stringToDigits(input);

        struct node *root = buildTree(numbers);

        std::cout << "Pre Order Traversal Algorithm" << std::endl;
        print(root);

        std::cout << "\nInverted Tree Pre Order Traversal" << std::endl;
        invertTree(root);
        print(root);
    }
    return 0;
}
