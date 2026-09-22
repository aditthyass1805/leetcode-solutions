#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize) {
    for (int left = 0, right = sSize - 1; left < right; left++, right--) {
        char temporary = s[left];
        s[left] = s[right];
        s[right] = temporary;
    }
}

int main(void) {
    char typical[] = "hello";
    char edge[] = "";

    reverseString(typical, (int) strlen(typical));
    reverseString(edge, (int) strlen(edge));
    printf("Typical case: %s\n", typical);
    printf("Edge case: \"%s\"\n", edge);

    return 0;
}
