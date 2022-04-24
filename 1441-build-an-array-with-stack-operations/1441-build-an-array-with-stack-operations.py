class Solution:
    def buildArray(self, t: List[int], n: int) -> List[str]:
        st = []
        for i in range(1,n+1):
            if t.count(i) > 0:
                st.append("Push")
            elif i > t[-1]:
                break
            else:
                st.append("Push")
                st.append("Pop")
        return st