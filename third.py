t = int(input())
for _ in range (t) :
	n = map( int , input().split() ) 
	arr = ["I DONT CARE"] 
	ls = list( map( int , input().split() ) ) 
	arr.extend(ls) 
	vec = [] 
	for i in range( 1 , len(arr) ) :
		vec.append( ( arr[arr[i]] , arr[i] ) ) 
	vec.sort( key = lambda x : x[0] ) 
	happy = False 
	for i in range ( 0 , len(vec) - 1 ) :
		if vec[i][0] == vec[i+1][0] and vec[i][1] != vec[i+1][1] :
			happy = True  
	if happy :
		print ("Truly Happy" ) 
	else :
		print ("Poor Chef" ) 
