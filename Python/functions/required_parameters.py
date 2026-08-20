'''for required parameter we have to pass value otherwise it will give error'''

def add(a,b,c,d,e):
    output= a+b -c +d-e
    return output

add(1,2,3,4,5) #this will work but if ony(add(1,2,3,4) #this will give error as we have not passed value for e
print(add(1,2,3,4,5))