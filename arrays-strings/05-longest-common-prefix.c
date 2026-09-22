#include <stdio.h>
#include <string.h>

// Test Case 1 (Typical): strs = ["flower","flow","flight"]
// Expected Output: "fl"

// Test Case 2 (Edge): strs = ["dog","racecar","car"]
// Expected Output: ""

void longestCommonPrefix(char **strs, int strsSize, char *result) {
    if (strsSize == 0) {
        result[0] = '\0';
        return;
    }

    size_t prefixLength = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        size_t matchLength = 0;
        while (matchLength < prefixLength && strs[i][matchLength] != '\0' &&
               strs[0][matchLength] == strs[i][matchLength]) {
            matchLength++;
        }
        prefixLength = matchLength;
    }

    memcpy(result, strs[0], prefixLength);
    result[prefixLength] = '\0';
}

int main(void) {
    char *typical[] = {"flower", "flow", "flight"};
    char *edge[] = {"dog", "racecar", "car"};
    char result[32];

    longestCommonPrefix(typical, 3, result);
    printf("Typical case: %s\n", result);
    longestCommonPrefix(edge, 3, result);
    printf("Edge case: \"%s\"\n", result);

    return 0;
}
