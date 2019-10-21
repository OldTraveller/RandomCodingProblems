# MAKE A CUSTOM VECTOR CLASS 
from math import hypot

class Vector: 
        def __init__(self, x = 0, y = 0): 
                self.x = x 
                self.y = y 
        
        def __repr__(self): 
                return 'VECTOR : (%r, %r)' % (self.x, self.y) 
        
        def __abs__(self): 
                return hypot(self.x, self.y) 
        
        def __add__(self, other): 
                x = self.x + other.x 
                y = self.y + other.y
                return Vector(x, y) 

        def __mul__(self, scalar): 
                return Vector(self.x * scalar, self.y * scalar) 


x = Vector(3, 6) 
print(x.__repr__()); 
x = x.__mul__(3)
print(x.__repr__()); 


