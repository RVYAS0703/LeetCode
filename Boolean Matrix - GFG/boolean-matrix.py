#User function Template for python3


#Function to modify the matrix such that if a matrix cell matrix[i][j]
#is 1 then all the cells in its ith row and jth column will become 1.
def booleanMatrix(matrix):
    row = len(matrix)
    col = len(matrix[0])
    
    row1 = set()
    col1 = set()
    
    for i in range(row):
        for j in range(col):
            if matrix[i][j] == 1:
                row1.add(i)
                col1.add(j)
    
    for i in row1:
        for j in range(col):
            matrix[i][j] = 1
            
    for i in range(row):
        for j in col1:
            matrix[i][j] = 1



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        r,c = map(int, input().strip().split())
        matrix = []
        for i in range(r):
            line = [int(x) for x in input().strip().split()]
            matrix.append(line)
        booleanMatrix(matrix)
        for i in range(r):
            for j in range(c):
                print(matrix[i][j], end=' ')
            print()


# } Driver Code Ends