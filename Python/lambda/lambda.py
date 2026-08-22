x= lambda a,b,c : a+b * c
print(x(1,2,3))
'''here a,b,c are required paramters'''
x= lambda a,b,c=0 : a+b * c
print(x(2,3)) 
'''here a,b are required paramters and c is optional parameter with default value 0'''

x= lambda : 2+3
print(x())
