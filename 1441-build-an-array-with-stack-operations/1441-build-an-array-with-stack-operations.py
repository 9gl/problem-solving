class Solution:
    def buildArray(self, t: List[int], n: int) -> List[str]:
        st = []
        psh = "Push"
        po = "Pop"
        index = 0
        for i in range(1,t[-1]+1):
            st.append(psh)
            if i != t[index]:
                st.append(po)
            else:
                index += 1
        return st