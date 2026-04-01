class Solution(object):
    def firstMatchingIndex(self, s):
        left, right = 0, len(s) - 1

        while left <= right:
            if s[left] == s[right]:
                return left
            left += 1
            right -= 1

        return -1