class Solution:
    def calPoints(self, ops: List[str]) -> int:
        st = []
        for e in ops:
            if e == "C":
                st.pop(-1)
            elif e == "D":
                st.append(st[-1] * 2)
            elif e == "+":
                st.append(st[-1] + st[-2])
            else:
                st.append(int(e))
        return sum(st)