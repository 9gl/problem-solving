class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d,st = {} ,[]
        for n in nums2:
            while len(st) and st[-1]  < n:
                d[st.pop()] = n
            st.append(n)
        return [d.get(n,-1) for n in nums1]
            
            