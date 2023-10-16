#include <iostream>

void findMissingElement(int arr[], int N) {
    int temp[N + 1];
    for (int i = 0; i <= N; ++i) {
        temp[i] = 0;
    }

    for (int i = 0; i < N; ++i) {
        temp[arr[i] - 1] = 1;
    }

    int missingElement;
    for (int i = 0; i <= N; ++i) {
        if (temp[i] == 0) {
            missingElement = i + 1;
            break;
        }
    }

    std::cout << "The missing element is: " << missingElement << std::endl;
}

int main() {
    int arr[] = {1, 3, 7, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMissingElement(arr, n);

    return 0;
}
