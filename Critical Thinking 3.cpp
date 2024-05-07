#include <iostream>

int main() {
    int int1, int2, int3;
    int *ptr1 = nullptr, *ptr2 = nullptr, *ptr3 = nullptr;

    // Asking for input
    std::cout << "Enter three integer values:\n";
    std::cout << "Value 1: ";
    std::cin >> int1;
    std::cout << "Value 2: ";
    std::cin >> int2;
    std::cout << "Value 3: ";
    std::cin >> int3;

    // Dynamic memory allocation
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    // Storing values via pointers
    *ptr1 = int1;
    *ptr2 = int2;
    *ptr3 = int3;

    // Displaying values from variables
    std::cout << "\nValues entered:\n";
    std::cout << "Integer 1: " << int1 << "\n";
    std::cout << "Integer 2: " << int2 << "\n";
    std::cout << "integer 3: " << int3 << "\n";

    // Displaying values through pointers
    std::cout << "\nValues through pointers:\n";
    std::cout << "*Pointer 1: " << *ptr1 << "\n";
    std::cout << "*Pointer 2: " << *ptr2 << "\n";
    std::cout << "*Pointer 3: " << *ptr3 << "\n";

    // Freeing allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}