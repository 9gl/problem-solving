class Solution:
    def minOperations(self, logs: List[str]) -> int:
        r = 0
        for ch in logs:
            if ch == "./": continue
            elif ch == "../":r = max(0,r-1);
            else: r+=1
        return r