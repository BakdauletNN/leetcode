def merge_two_list(a,b):
        c = []
        i = j = 0
        while i < len(a) and j < len(b):
            if a[i] < b[j]:
                c.append(a[i])
                i += 1
            else:
                c.append(b[j])
                j += 1
        if i < len(a):
            c += a[i:]
        if j < len(b):
            c += b[j:]
        return c


class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) == 1:
            return nums
        middle = len(nums) // 2
        left_side = self.sortArray(nums[:middle])
        right_side = self.sortArray(nums[middle:])
        return merge_two_list(a=left_side, b=right_side)
