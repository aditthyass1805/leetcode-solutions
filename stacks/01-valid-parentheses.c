#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Test Case 1 (Typical): s = "()[]{}"
// Expected Output: true

// Test Case 2 (Edge): s = "(]"
// Expected Output: false

int isValid(const char *s) {
    size_t length = strlen(s);
    char *stack = malloc(length + 1);
    int top = 0;

    if (stack == NULL) {
        return 0;
    }

    for (size_t i = 0; i < length; i++) {
        char current = s[i];
        if (current == '(' || current == '[' || current == '{') {
            stack[top++] = current;
        } else {
            if (top == 0 ||
                (current == ')' && stack[top - 1] != '(') ||
                (current == ']' && stack[top - 1] != '[') ||
                (current == '}' && stack[top - 1] != '{')) {
                free(stack);
                return 0;
            }
            top--;
        }
    }

    int valid = top == 0;
    free(stack);
    return valid;
}

int main(void) {
    printf("Typical case: %s\n", isValid("{[]}") ? "true" : "false");
    printf("Edge case: %s\n", isValid("(") ? "true" : "false");

    return 0;
}
