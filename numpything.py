import numpy as np


def printArray( arr ) :
	for i in arr : 
		for j in i : 
			print ( j , end = " " ) 
		print () 



arr = [[1,2,3],[4,5,6],[7,8,9],[10,11,12]]
narr = np.asarray(arr) 
printArray( narr ) 
barr = narr.reshape(2,6) 
printArray( barr ) 
