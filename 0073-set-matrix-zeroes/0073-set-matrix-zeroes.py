class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
                
        rows = len(matrix)
        cols = len(matrix[0])

        # Keep track of rows and columns to be set to 0
        zero_rows = set()
        zero_cols = set()

        # Iterate over the matrix to find the 0 elements
        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == 0:
                    zero_rows.add(i)
                    zero_cols.add(j)

        # Set the corresponding rows and columns to 0
        for row in zero_rows:
            for j in range(cols):
                matrix[row][j] = 0

        for col in zero_cols:
            for i in range(rows):
                matrix[i][col] = 0

        return matrix


