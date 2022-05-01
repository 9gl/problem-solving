class Solution:
    def helper(self,x : str)->list:
        st = []
        for i in x:
            if i != '#':
                st.append(i)
            elif len(st):
                st.pop()
        return st
    def backspaceCompare(self, s: str, t: str) -> bool:
        return self.helper(s) == self.helper(t)