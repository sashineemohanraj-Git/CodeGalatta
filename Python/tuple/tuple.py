#for tuple instead of[] in lists we use() 
'''in tuple cannot change the values once it is created
cannot be added removed or replaced'''
scores= (70,78, 90, 80, 60, 50) #tuple

#unpacking the tuple
b1, b2, b3, b4, b5, b6= scores #no of tuple should be equal to no of variables

print(b1)

b1,b2, b3, *others= scores #*others-remaining values in the tuple will be stored in others

print(others)