class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for i in nums:
            if self.digits(i) % 2 == 0 :
                count += 1
        return count
    
    def digits(self, num):
        no = 0
        while num > 0:
            no += 1
            num = num // 10
        return no