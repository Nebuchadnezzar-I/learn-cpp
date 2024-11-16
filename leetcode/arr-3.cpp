// Delete

#include <iostream>
#include <cstdlib>
#include <array>

constexpr int findElm(int arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) return i;
    }

    return -1;
}

constexpr int deleteElm(int arr, int n, int key) {
    int goalElmPos = findElm(arr, n, key);
    if (-1 == goalElmPos) {
        std::cout << "Elm to remove is not found!" << '\n';
        return n;
    }

    for (int i = goalElmPos; i < n -1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int arrLen = std::end(arr) - std::begin(arr);

    // Before
    for (int item : arr) {
        std::cout << item << " ";
    }

    std::cout << '\n';

    int n = deleteElm(arr, arrLen, 30);

    // After
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << '\n';
}