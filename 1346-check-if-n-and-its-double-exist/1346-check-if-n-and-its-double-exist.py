class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        mp = set()
        for num in arr:
            if num / 2 in mp or num * 2 in mp:
                return True
            mp.add(num)
        return False