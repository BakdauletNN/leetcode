from typing import List

class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        matrix[:] = matrix[::-1]
        res = []
        for j in range(len(matrix[0])): 
            for i in range(len(matrix)): 
                res.append(matrix[i][j])
        
        ans = []
        for i in range(0, len(res), len(matrix)):
            ans.append(res[i:i+len(matrix)])
        matrix.clear()
        matrix.extend(ans)
