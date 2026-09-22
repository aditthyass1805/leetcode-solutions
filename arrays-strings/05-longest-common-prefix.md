# Longest Common Prefix

- **LeetCode:** [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
- **Approach:** Start with the first string as the prefix and shorten it until every other string begins with it.
- **Time complexity:** $O(nm)$, where $n$ is the number of strings and $m$ is the prefix length examined
- **Space complexity:** $O(m)$ for the output buffer

## Notes

The local `main()` supplies its own output buffer because the C function writes the prefix into caller-provided storage. The tests cover a shared prefix and no shared prefix. This is a practice solution and has not been submitted to LeetCode.
