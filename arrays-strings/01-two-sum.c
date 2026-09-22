#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    static int answer[2];

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
        }
    }

    *returnSize = 0;
    return answer;
}

void printResult(const int *result, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", result[i], i + 1 < size ? ", " : "");
    }
    printf("]\n");
}

int main(void) {
    int typical[] = {2, 7, 11, 15};
    int edge[] = {3, 3};
    int resultSize;
    int *result;

    result = twoSum(typical, 4, 9, &resultSize);
    printf("Typical case: ");
    printResult(result, resultSize);
    result = twoSum(edge, 2, 6, &resultSize);
    printf("Edge case: ");
    printResult(result, resultSize);

    return 0;
}
