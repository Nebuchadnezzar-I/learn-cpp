// Insert

#include <iostream>
#include <cstdlib>

void insertElement(int *arr, int n, int val, int pos) {
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;
}

int main() {
    int arr[10] = { 12, 16, 20, 40, 50, 70 };
    int n = 6;

    // Before ins
    for (int num : arr) {
        std::cout << num << ", ";
    }

    std::cout << '\n';

    insertElement(arr, n, 199, 2);

    std::cout << "Added elm: ";
    for (int num : arr) {
        std::cout << num << ", ";
    }

    return EXIT_SUCCESS;
}