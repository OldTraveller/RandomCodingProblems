from collections import ChainMap 

first = {
        'a' : 1, 
        'b' : 2, 
        'c' : 3
}

second = {
        'd' : 4, 
        'a' : 2,
        'z' : 12
}

# A ChainMap takes multiple mappings and makes them logically appear as one. However,
# the mappings are not literally merged together. Instead, a ChainMap simply keeps a list
# of the underlying mappings and redefines common dictionary operations to scan the
# list. Most operations will work. For example:

cm = ChainMap(first, second) 
print('a : ', cm['a']) 
print('d : ', cm['d']) 

# A ChainMap is particularly useful when working with scoped values such as variables in
# a programming language (i.e., globals, locals, etc.).
