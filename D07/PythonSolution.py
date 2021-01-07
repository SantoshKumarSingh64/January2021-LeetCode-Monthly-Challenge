def lengthOfLongestSubstring(s):

    index_map = {}
    n = len(s)
    l = 0
    r = 0
    max_length = 0
    while l < n and r < n:

        if s[r] in index_map:
            l = max(index_map[s[r]]+1,l)
        index_map[s[r]] = r
        max_length = max(max_length,r-l+1)
        r += 1

    return max_length

print(lengthOfLongestSubstring("bbbbb"))
