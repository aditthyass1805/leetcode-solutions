#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int nextNonZero = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temporary = nums[nextNonZero];
            nums[nextNonZero] = nums[i];
            nums[i] = temporary;
            nextNonZero++;
        }
    }
}

void printArray(const int *nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d%s", nums[i], i + 1 < numsSize ? ", " : "");
    }
    printf("]\n");
}

int main(void) {
    int typical[] = {0, 1, 0, 3, 12};
    int edge[] = {0, 0};

    moveZeroes(typical, 5);
    moveZeroes(edge, 2);
    printf("Typical case: ");
    printArray(typical, 5);
    printf("Edge case: ");
    printArray(edge, 2);

    return 0;
}
