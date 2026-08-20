
def add(a,b,c,d,e=0):
    output= a+b -c +d-e
    return output

add(1, 3, c=5, d=4) #this is keyword arguments nd positional arguments and we can pass values in any order as we are using keyword arguments
print(add(1, 3, c=5, d=4))