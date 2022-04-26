class CustomStack:

    def __init__(self, maxSize: int):
        self.maxsz = maxSize
        self.st = []

    def push(self, x: int) -> None:
        if len(self.st) < self.maxsz:
            self.st.append(x)

    def pop(self) -> int:
        if len(self.st):
            x = self.st[-1]
            self.st.pop()
            return x
        return -1

    def increment(self, k: int, val: int) -> None:
        x = k
        if(len(self.st) < k):
            x = len(self.st)
        for i in range(x):
            self.st[i] += val



# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)