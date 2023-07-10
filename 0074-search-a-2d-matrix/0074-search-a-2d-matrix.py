class Solution:
    def searchMatrix(self, matrix: List[List[int]], x: int) -> bool:
        if not matrix:
            return False

        rows = len(matrix)
        cols = len(matrix[0])
        low = 0
        high = rows * cols - 1

        while low <= high:
            mid = (low + high) // 2
            num = matrix[mid // cols][mid % cols]

            if num == x:
                return True
            elif num < x:
                low = mid + 1
            else:
                high = mid - 1

        return False