# Valid Parentheses

- **LeetCode:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- **Approach:** Push opening brackets onto a stack and require each closing bracket to match the most recent opening bracket.
- **Time complexity:** $O(n)$
- **Space complexity:** $O(n)$

## Notes

The local implementation allocates a character stack based on the input length and frees it before returning. The tests cover properly nested brackets and an unmatched opening bracket. This is a practice solution and has not been submitted to LeetCode.
