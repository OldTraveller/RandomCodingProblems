from collections import namedtuple 

City = namedtuple('City', 'name country population coordinates')
tokyo = City('Tokyo', 'JP', 123.123, (23.232123, 12.123123)) 

print(tokyo)