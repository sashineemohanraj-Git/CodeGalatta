scores= [70,78, 90, 80, 60, 50]

#unpacking the list
b1, b2, b3, b4, b5, b6= scores #no of list should be equal to no of variables

print(b1)

b1,b2, b3, *others= scores #*others-remaining values in the list will be stored in others

print(others)