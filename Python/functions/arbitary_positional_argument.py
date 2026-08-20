nums= [1,2,3,4,5]

a,b,*c= nums 
print(a) #1
print(b) #2
print(c) #[3, 4, 5] #*c will take all the remaining values in the list and store it in c

a,*b,c= nums
print(a) #1
print(b) #[2, 3, 4] #*b will take all the remaining values in the list and store it in b
print(c) #5

*a,b,c= nums
print(a) #[1, 2, 3] #*a will take all the remaining values in the list and store it in a
print(b) #4
print(c) #5
def add_numbers(*numbers):
    sum=0
    for num in numbers:
        sum+=num
    return sum