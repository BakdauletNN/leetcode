from typing import List


class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left_side = 0
        right_side = len(nums) - 1
        res = [0] * len(nums)
        idx = len(nums) - 1
        while left_side <= right_side:
            if nums[left_side] ** 2 < nums[right_side] **2:
                res[idx] = nums[right_side] ** 2
                right_side -= 1
                
            else:
                res[idx] = nums[left_side] ** 2
                left_side += 1
            idx -= 1
                
        return res

print(Solution().sortedSquares(nums = [-4,-1,0,3,10]))


