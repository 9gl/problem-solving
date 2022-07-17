class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        return not s.count('01')