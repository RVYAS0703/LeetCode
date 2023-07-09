class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row=len(matrix)
        column=len(matrix[0])
        
        zro_r=set()
        zro_col=set()
        
        for i in range(row):
            for j in range(column):
                if matrix[i][j]==0:
                    zro_r.add(i)
                    zro_col.add(j)
        for r in zro_r:
            for j in range(column):
                matrix[r][j]=0
                
        for c in zro_col:
            for i in range(row):
                matrix[i][c]=0