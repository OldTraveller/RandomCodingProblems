# LIST IS MUTABLE IN NATURE. WHICH MEANS THAT IT CAN DYNAMICALLY EXPAND AND CONTRACT !! 

ls = [] # Initialize an EMPTY LIST 
for i in range(0, 11): 
        ls.append(i) 
print(ls)

# CAN HAVE HETERGENOUS ELEMENTS TOO. 
ls.append('Something') 
print(ls) 

# __add__ METHOD EXPANDS THE LIST CONCATENATING AT THE END OF THE LIST. 
another = [100, 200, 300] 
ls = ls.__add__(another)
print(ls)

# ABOVE __add__ NEEDED TO BE ASSIGNED. USING __iadd__ YOU CAN DO INPLACE ASSIGNMENT 
one = [1, 2, 3, 4]
two = [5, 6,7,8,9, 10] 
print(two)
two.__iadd__(one) # ADDING WITHOUT THE ASSIGNMENT. 
print(two) 


# append METHOD APPENDS AN ELEMENT AT THE END. 
print(one) 
one.append(12)
one.append(123)
print(one) 

# __contains__(e) CHECKS WHETHER THE ELEMENT e IS THERE IN THE LSIT 
check = 2
if one.__contains__(check): 
        print(check, " IS PRESENT !") 
else: 
        print(check, " IS NOT PRESENT !!") 


# count(e) METHOD COUNTS THE OCCURENCES OF AN ELEMENT IN THE LIST 
one = [1,2,2,2,3,4,4,5,5,5,6]
print("ONE OCCURSS : ", one.count(1))
print("TWO OCCURS : ", one.count(2))
print("FIVE OCCURS : ", one.count(5))

# GET THE POSITION OF THE FIRST OCCURENCEC OF e BY USING :- index(e) 
fibonacci = [1, 1, 2, 3, 5, 8, 13] 
print("FIBONACCI : ", fibonacci[3]) 
print("INDEX OF 1 IS : ", fibonacci.index(2))


# REVERSE THE ORDER OF ELEMENTS IN PLACE 
arr = [1,2,3,4,5,6,7]
print(arr)
arr.reverse()
print(arr)

# TO SORT THE LIST :- USE sort
arr1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1] 
arr1.sort()
print(arr1)

# TO SORT THE LIST IN REVERSE ORDER USE THE reverse OPTION. 
arr2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 
arr2.sort(reverse = True) 
print(arr2)

# USAGE OF THE SLICING OPERATOR 
arr = [1,2,3,4,5,6,7,8,9,10] 
left = arr[:3]
right = arr[3:]
print("LEFT : ", left)
print("RIGHT : ", right) 

# GETTING THE LAST THREE ELEMENT IN THE LIST
last3 = arr[-3:]
print(last3)

# TO CREATE A LIST WITH THE range KEYWORD 
# USING BOTH THE (start, stop) VALUE FOR THE RANGE [start, stop)
lis = list(range(20, 30)) 
print(lis)
# JUST THE stop VALUE [EXCLUDING]
list2 = list(range(20))
print(list2) 



# WE CAN USE THE * OPERATOR WITH THE SEQUENCES SUCH AS LIST. 
arr = [0] * 5 
print(arr) 
arr1 = [1, 2, 3] * 3 
print(arr1)
arr2 = [[1,2], [3,4]] * 3
print(arr2)

# THE + OPERATOR SIMPLY EXTENDS THE LIST WITH THE ELEMENTS OF THE OTHER LIST 
arr1 = [1,2,3]
check1 = id(arr1)
arr2 = [4,5,6]
check2 = id(arr2) 
arr1 += arr2 
print(arr1)
check3 = id(arr1) 

print("CHECK VALUES : ")
print(check1) 
print(check2)
print(check3)
# HERE THE CHECK1 AND CHECK3 VALUE COMES OUT TO BE SAME. BECAUSE THE SAME REFERENCE IS USED AND HTE LIST IS EXTENDED 
# SO THE LIST AIN'T GOING NO WHERE 

# NOW TRYING THE SAME STUFF WITH TUPLES 
arr1 = (1,2,3)
check1 = id(arr1)
arr2 = (4,5,6)
check2 = id(arr2) 
arr1 += arr2 
print(arr1)
check3 = id(arr1) 
print("CHECK VALUES (TUPLES): ")
print(check1) 
print(check2)
print(check3)
# THIS TIME WE OBSERVE THAT THE REFERENCES VALUES WILL CHANGE HERE. BECAUSE THE TUPLES BY NATURE ARE IMMUTABLE.


# NESTED LIST CAN ALSO BE PRESENT. IT'S LIKE A MULTI-DIMENSIONAL ARRAY. 
multi = [[1,2,3], [4,5,6], [7,8,9]]
for i in multi:
        for j in i: 
                print(j, end = " ") 
        print("")
multi0 = [[0, 0, 0] for x in range(0, 3)]
print(multi0)

# TO SORT A LIST. WE CAN USE list.sort AND SORTED BUILT IN FUNCTION. 
# list.sort SORTS THE LIST IN PLACE. 

# ONE AWESOME FACT TO BE NOTED IS. WHENEVER ANY METHOD DOES THE OPERATIONS IN PLACE. THEN THOSE METHODS HAVE TO 
# RETURN A None OBJECT INDICATING THAT THE ORIGINAL OBJECT HAS BEEN CHANGED AND NO COPY WAS HARMED DURING THE STUFF. 


