#include <stdio.h>

// Test Case 1 (Typical): nums = [-1,0,3,5,9,12], target = 9
// Expected Output: 4

// Test Case 2 (Edge): nums = [-1,0,3,5,9,12], target = 2
// Expected Output: -1


int search(const int *nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main(void) {
    int typical[] = {-1, 0, 3, 5, 9, 12};
    int edge[] = {5};

    printf("Typical case: %d\n", search(typical, 6, 9));
    printf("Edge case: %d\n", search(edge, 1, 2));

    return 0;
}
