i = lambda : map ( int , input().split() ) 

print ("Enter the value of n , k " )
n , k = i() 

def binocoeff ( n , k ) :
	if n >= k :
		product = 1 
		if n - k > k :
			k = n - k 
		for i in range ( k ) :
			product *= ( n - i ) 
			product /= ( i + 1 ) 
		return product 

	else :
		print ("Nothing ! " )
		return -1 

print ( "BINOCOEFF IS : " , binocoeff ( n , k ) ) 
