// Find the Maximum Element in an Array using Pointers
// Exercise: Find Maximum Element

// Specification:

// Write a C++ function find_max_element that takes an integer array and its size as input and returns the maximum element in the array using pointers.

// Function Signature:

// int findMaxElement(int* arr, int size);
// Input:

// arr: A pointer to the first element of the integer array.

// size: The size of the array.

// Output:

// The function should return the maximum element in the array.

int find_max_element(int* arr, int size) {
    int maxEllement = *arr;

    for(int i= 1; i < size; i++){
        if(*(arr + i) > maxEllement){
            maxEllement = *(arr + i);
        }
    }

    return maxEllement;
};

