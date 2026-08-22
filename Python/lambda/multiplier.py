def multiplier(n):
   x= lambda a: a * n
   return x

mydoubler = multiplier(2)
'''lambda a: a*2'''
print(mydoubler(11)) #22