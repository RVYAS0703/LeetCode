class Solution:
    

    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        matrix1 = list(map(list, zip(*matrix)))
        for i in range(rows):
            matrix[i] = matrix1[i][::-1]

    
        