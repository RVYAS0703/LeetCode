class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []

        rows = len(matrix)
        cols = len(matrix[0])
        total_elements = rows * cols
        ans = []

        # Define the boundaries
        top = 0
        left = 0
        bottom = rows - 1
        right = cols - 1

        while len(ans) < total_elements:
            # Traverse the top row from left to right
            for i in range(left, right + 1):
                ans.append(matrix[top][i])
            top += 1

            # Traverse the right column from top to bottom
            for i in range(top, bottom + 1):
                ans.append(matrix[i][right])
            right -= 1

            # Check if there are remaining rows to traverse
            if len(ans) < total_elements and top <= bottom:
                # Traverse the bottom row from right to left
                for i in range(right, left - 1, -1):
                    ans.append(matrix[bottom][i])
                bottom -= 1

            # Check if there are remaining columns to traverse
            if len(ans) < total_elements and left <= right:
                # Traverse the left column from bottom to top
                for i in range(bottom, top - 1, -1):
                    ans.append(matrix[i][left])
                left += 1

        return ans