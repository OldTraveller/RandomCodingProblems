# There is a rich set of sequence libraries implemented in python

# Container Sequences 
# List, Collections, Tuple can hold objects of different types. 

# GENERATOR FUNCTIONS CAN BE USED TO GENERATE STUFFS. IT'S A BETTER ALTERNATIVE TO MANUALLY 
# CONSTRUCTING THE ARRAY FROM OTHER TEMPORARY ARRAY. BECUASE THE TEMP ARRAY WILL TAKE UP MEMORY. 

color = ['BLACK', 'WHITE'] 
size = ['S', 'M', 'L'] 

# PRINT THE VARIOUS COMBINATIONS OF THE STUFF 
for tshirt in ('%s %s' % (c, s) for c in color for s in size): 
        print(tshirt) 

