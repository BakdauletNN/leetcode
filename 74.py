class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row_top, row_down = 0, len(matrix) - 1
        while row_top <= row_down:
            mid_position = row_top + (row_down - row_top) // 2
            row = matrix[mid_position]
            if row[0] > target:
                row_down = mid_position - 1
            elif row[-1] < target:
                row_top = mid_position + 1
            else:
                break
        left, right = 0, len(row) - 1
        while left <= right:
            middle = (left + right) // 2
            elem = row[middle]
            if elem > target:
                right = middle - 1
            elif elem < target:
                left = middle + 1
            else:
                return True
        return False
