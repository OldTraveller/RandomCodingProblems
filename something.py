def main() :
	i = lambda : map( int , input().split() ) 
	precal = [1,1] 
	for i in range(2,30) :
		precal.append( precal[i-1] + precal[i-2]*2 ) 
	t = i() 
	for i in range(t) :
		n = i() 
		print( precal[n-1] , 2**n , end = " " ) 

main() 
