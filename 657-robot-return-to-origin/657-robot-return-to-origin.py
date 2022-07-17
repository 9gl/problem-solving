class Solution:
    def judgeCircle(self, moves: str) -> bool:
        straight = 0
        sideways = 0
        for move in moves:
            if move == "U": straight+=1
            if move == "D": straight-=1
            if move == "L": sideways+=1
            if move == "R": sideways-=1
        return straight==0 and sideways==0
                