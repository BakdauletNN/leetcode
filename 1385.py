from typing import List

class Solution:
    def findTheDistanceValue(self, arr1: List[int], arr2: List[int], d: int) -> int:
        left, right = 0, len(arr2) - 1
        c = 1
        while True:
            if abs(arr1[left] - abs(arr2[right])) <= d:
                return c
            right -= 1
            if right == 0:
                right = len(arr2) - 1
                left += 1
                c += 1

print(Solution().findTheDistanceValue(arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
))