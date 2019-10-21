# UNPACKING OF THE VARIABLES 
data = [1, 2, 3, 4, 5] 
for i in data: 
        print(i, end = " ") 

# NOW WE CAN UNPACK IT INTO DIFFERENT VARIABLES, PROVIDED THE NUMBER OF ELEMENTS AND VARIABLES MATCH !! 
a, b, c, d, e = data 

# DISPLAY THE VALEUS OF THE VARIABLES !! 
print("a : ", a) 
print("b : ", b) 
print("c : ", c) 
print("d : ", d) 
print("e : ", e) 

# TALKING ABOUT THE STAR THING IN THE PYTHON !! 
a, *c = data 
print("NOW a : ", a)
print("NOW c : ", c); 
# THE STAR THING WILL ALWAYS BE A LIST !! EVEN IF THE NUMBER OF ELEMENTS IN THE STAR THING IS 0 


# HEARD OF THE heap COLLECTION ?? 
import heapq 
nums = [1,2,3,4,5,6,7,1,1,3,-1,2,-3] 
largest = heapq.nlargest(4, nums) 
smallest = heapq.nsmallest(4, nums) 

print("SMALLEST ARE : ")
for i in smallest:      
        print(i, end = " ")
print("") 

print("LARGEST ARE : ") 
for i in largest: 
        print(i, end = " ") 
print("") 

print("THE HEAPIFIED VERSION IS :") 
heapq.heapify(nums) 
for i in nums: 
        print(i, end = " ") 

# WE CAN USE COMPLEX DATA STRUCTURES ALSO WITH THE HEAP COLLECTION 
eg = [
        {'name' : 'Abhishek Kumar Rai', 'marks' : 90.00 }, 
        {'name' : 'Naveen A', 'marks' : 85.00}, 
        {'name' : 'Aishwarya P', 'marks' : 87.00 }, 
        {'name' : 'Someone', 'marks' : 54.00 }
]
print("NOW eg IS : ") 
for i in eg: 
        print(i, end = " ") 
print("") 
toppers = heapq.nlargest(3, eg, key=lambda eg: eg['marks']) 
for i in range(0, len(toppers)): 
        print(i + 1, " : ", toppers[i]['name']) 
print("")


# SHORT WAYS TO HANDLE REDUCTION AND HANDLE THINGS CORRECTLY !! 

# Suppose you want to store the square of a list in another list !! 
arr = [1, 2, 3, 4, 5] 
squared = (x * x for x in arr) 
for i in squared: 
        print(i, end = " ")
print("")  
