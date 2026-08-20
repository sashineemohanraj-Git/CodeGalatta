#positional argument

def add(a,b,c=9,d=0,e=5):
    output= a+b -c +d-e
    return output

add(1,2) # a is 1 and b is 2 as they are in positional arguments and c,d,e are optional parameters
print(add(1,2))