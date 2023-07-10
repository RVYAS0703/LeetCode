class Solution:
    def searchMatrix(self, matrix: List[List[int]], x: int) -> bool:
        	# code here 
            n=len(matrix)
            m=len(matrix[0])
            row=0
            for i in range(n):
                if matrix[i][0]==x:
                    return True
                elif matrix[i][0]>x:
                     row=i-1
                     break
                else:
                     row=i

            if row>=0:
                for i in range (m):
                      if matrix[row][i]==x:
                          return True

            return False