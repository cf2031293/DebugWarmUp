#include <iostream>

void computeSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) { // edited the inequality from <= to <
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    computeSum(numbers, size);

    return 0;
}