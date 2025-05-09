class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left_side = 0
        right_side = len(nums) - 1
        result = [0] * len(nums)
        index = right_side
        
        while left_side <= right_side:
            left_sq = nums[left_side] ** 2
            right_sq = nums[right_side] ** 2
            
            if left_sq >= right_sq:
                result[index] = left_sq
                left_side += 1
            else:
                result[index] = right_sq
                right_side -= 1
            index -= 1
        
        return result
