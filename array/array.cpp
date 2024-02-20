//small changes
//small

#include <iostream>

int main() {
    // Get the size of the array from the user
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the 1D array
    int* dynamicArray = new int[size]; // Using dynamic memory allocation

    // Fill the array with values
    std::cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i]; // Input elements into the dynamically allocated array
    }

    // Display the elements of the array
    std::cout << "Dynamic 1D Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " "; // Output elements of the dynamically allocated array
    }
    std::cout << "\n";

    // Deallocate dynamically allocated memory to prevent memory leaks
    delete[] dynamicArray;

    return 0;
}
//small