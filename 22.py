class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        self.n = n
        self.stack = []
        self.result = []
        self.backtracking(opened=0, closed=0)
        return self.result
    def backtracking(self, opened, closed):
        if opened == closed ==  self.n:
            self.result.append(''.join(self.stack))
            return 
        if opened < self.n:
            self.stack.append('(')
            self.backtracking(opened + 1, closed)
            self.stack.pop()
        if closed < opened:
            self.stack.append(')')
            self.backtracking(opened, closed + 1)
            self.stack.pop()
