class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        r = ""
        ope = 0
        for i in s:
            if i == '(' and ope > 0:
                r += i
            elif i == ')' and ope > 1:
                r += i
            ope += 1 if i == '(' else -1
        return r