#include <iostream>
#include <vector>
#include <string>
#include <sstream>
<<<<<<< HEAD
#include "treeInversion.h"
=======
#include "include/treeInversion.h"
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff

std::vector<int> stringToDigits (std::string stringDigits) {
    // Converts a string of digits (e.g. "2,0,2,3,4") to a array of integers

    std::vector<int> numbers;

    std::stringstream ss(stringDigits);

    int digit;
    // while each character is insert as a digit from the string
    while(ss >> digit) {
        numbers.push_back(digit);

        if(ss.peek() == ',') {
            ss.ignore();
        }
    }

    return numbers;
}

struct node * buildTree(std::vector<int> numbers) {

    // Initialize tree root
    struct node *root = new struct node();
    int index = 0;

    // Build the tree
    build(numbers, index, root);

    return root;
}

void build(std::vector<int> numbers, int index,
        struct node *currentNode) {

    currentNode->value = numbers[index];
<<<<<<< HEAD

    // If left child exists, build it
    int newIndex = 2 * index + 1;
    if (newIndex < numbers.size()) {
=======
    int size = numbers.size();

    // If left child exists, build it
    int newIndex = 2 * index + 1;
    if (newIndex < size) {
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff
        currentNode->leftChild = new struct node();

        build(numbers, newIndex, currentNode->leftChild);
    } else {
        currentNode->leftChild = NULL;
    }

    newIndex++;
    // If right child exists, build it
<<<<<<< HEAD
    if (newIndex < numbers.size()) {
=======
    if (newIndex < size) {
>>>>>>> fbef33f7c6a38c936c61df73d2c1c9234a650bff
        currentNode->rightChild = new struct node();

        build(numbers, newIndex, currentNode->rightChild);
    } else {
        currentNode->rightChild = NULL;
    }

}

void invertTree(struct node *currentNode) {
    // Inverts any given binary tree
    if(currentNode != NULL) {
        struct node *temp;
        temp = currentNode->leftChild;
        currentNode->leftChild = currentNode->rightChild;
        currentNode->rightChild = temp;
        invertTree(currentNode->leftChild);
        invertTree(currentNode->rightChild);
    }

}


void print(struct node *node) {
    // Pre Order Traversal of any binary tree
    std::cout << node->value << std::endl;

    if(node->leftChild != NULL) {
        print(node->leftChild);
    }

    if(node->rightChild != NULL) {
        print(node->rightChild);
    }
}

