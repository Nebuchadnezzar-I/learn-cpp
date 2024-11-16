// Search

#include <iostream>
#include <cstdlib>
#include<array>

int findElm(int *arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) return i;
    }

    return -1;
}

int main() {
    int arr[] = { 12, 34, 10, 6, 0 };
    int len = std::end(arr) - std::begin(arr);
    int key = 40;
    int position = findElm(arr, len, key);

    if (-1 == position) 
        std::cout << "Not found!" << '\n';
    else
        std::cout << "Found at: " << position + 1 << '\n';

    return EXIT_SUCCESS;
}