# Valid Anagram

- **LeetCode:** [Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- **Approach:** Count the occurrences of each byte in the first string and subtract the occurrences from the second string.
- **Time complexity:** $O(n)$
- **Space complexity:** $O(1)$ because the frequency table has fixed size 256

## Notes

This implementation assumes the standard ASCII character range used by the basic LeetCode version. The tests cover a matching anagram and two different one-character strings. This is a practice solution and has not been submitted to LeetCode.
