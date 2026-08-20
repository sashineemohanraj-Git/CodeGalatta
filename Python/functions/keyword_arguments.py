
def add(a,b,c,d,e=0):
    output= a+b -c +d-e
    return output

add(c=3,d=4,a=6,b=2) #this is keyword arguments and we can pass values in any order as we are using keyword arguments
print(add(c=3,d=4,a=6,b=2))