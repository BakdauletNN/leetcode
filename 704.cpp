from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        while left<= right:
            middle = (left + right) // 2
            if nums[middle] > target:
                right = middle - 1
            if nums[middle] < target:
                left = middle + 1
            if nums[middle] == target:
                return middle
        return -1



print(Solution().search(nums = [-1,0,5], target = -1))