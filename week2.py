#2 ROTATE MATRIX BY 90 DEGREE ANTICLOCKWISE
n = len(mat)
        for i in range(n):
            mat[i] = mat[i][: :-1]
        for i in range(n):
            for j in range(i, n):
                mat[i][j], mat[j][i] = mat[j][i], mat[i][j]

#3 SUM OF PRINCIPAL DIAGONAL
sum = 0
        for i in range(N):
            sum += M[i][i]
        return sum

#4 TRANSPOSE OF A MATRIX
n = len(mat)
        for i in range(n):
            for j in range(i,n):
                mat[i][j], mat[j][i]=mat[j][i], mat[i][j]
        return mat


#5 CHECK FOR SPARSE MATRIX
c = 0
    for i in range(0,m) :
        for j in range(0,n) :
            if (array[i][j] == 0) :
                c+= 1
 
    return (c > ((m * n) // 2))

#10 COUNT ZEROES IN SORTED MATRIX
s=0
for i in range(N):
  for j in range(N):
    if A[i][j]==0:
      s+=1
return s


        
