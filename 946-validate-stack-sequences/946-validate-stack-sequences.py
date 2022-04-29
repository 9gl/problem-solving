class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        j = 0
        st = []
        for i in pushed:
            st.append(i)
            while len(st) and st[-1] == popped[j]:
                st.pop()
                j+=1
        return j == len(popped)