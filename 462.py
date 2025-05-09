from typing import List


class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        avr = sorted(nums)[len(nums) // 2]
        res = 0
        for i in nums:
            res += abs(i - avr)
        return res    
