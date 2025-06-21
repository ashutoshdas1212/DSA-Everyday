#include <iostream>
using namespace std;

// Helper function to generate subsets recursively
void generateSubsets(int input[], int n, int output[][20], int currentIndex, int currentSubset[], int &outputIndex, int currentSubsetSize) {
    // Base case: if we have processed all elements of the input array
    if (currentIndex == n) {
        // Store the size of the current subset
        output[outputIndex][0] = currentSubsetSize;
        // Store the current subset
        for (int i = 0; i < currentSubsetSize; i++) {
            output[outputIndex][i + 1] = currentSubset[i];
        }
        // Move to the next row in the output array
        outputIndex++;
        return;
    }

    // Exclude the current element and proceed to the next element
    generateSubsets(input, n, output, currentIndex + 1, currentSubset, outputIndex, currentSubsetSize);

    // Include the current element in the subset and proceed to the next element
    currentSubset[currentSubsetSize] = input[currentIndex];
    generateSubsets(input, n, output, currentIndex + 1, currentSubset, outputIndex, currentSubsetSize + 1);
}

// Main function to be filled
int subset(int input[], int n, int output[][20]) {
    int currentSubset[20]; // Temporary array to store current subset
    int outputIndex = 0;   // Index to keep track of the current row in the output array
    generateSubsets(input, n, output, 0, currentSubset, outputIndex, 0);
    return outputIndex;    // Return the number of subsets generated
}

