'''for required parameter we have to pass value otherwise it will give error'''

def add(a,b,c=3,d=4,e=5): #a nd b are required parameters and c,d,e are optional parameters
    #optional parameters can only be used after required parameters and cannot be used in between required parameters
    output= a+b -c +d-e
    return output

add(1,2,) #this will work but if ony(add(1,2,3,4) #this will give error as we have not passed value for e
print(add(1,2,4))