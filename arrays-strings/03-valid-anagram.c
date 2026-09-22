#include <stdio.h>
#include <string.h>

// Test Case 1 (Typical): s = "anagram", t = "nagaram"
// Expected Output: true

// Test Case 2 (Edge): s = "a", t = "b"
// Expected Output: false

int isAnagram(const char *s, const char *t) {
    int counts[256] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (size_t i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char) s[i]]++;
        counts[(unsigned char) t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    printf("Typical case: %s\n", isAnagram("anagram", "nagaram") ? "true" : "false");
    printf("Edge case: %s\n", isAnagram("a", "b") ? "true" : "false");

    return 0;
}
