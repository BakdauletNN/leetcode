from typing import List

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left, right = 0, len(numbers) - 1
        
        while left < right:
            current_sum = numbers[left] + numbers[right]
            if current_sum == target:
                return [left + 1, right + 1]
            elif current_sum < target:
                left += 1
            else:
                right -= 1
        
        return [-1, -1]  # Если решение не найдено (но по условию оно всегда есть)


print(Solution().twoSum(numbers = [1,2,3,4,4,9,56,90], target = 8))