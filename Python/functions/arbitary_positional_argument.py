#meaning of arbitary(*)
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
#--------------------------------------------------------------------------------------------------------------------------
def add_numbers(*numbers):
    sum=0
    for num in numbers:
        sum+=num
    return sum

add_numbers(10,3)# many numbers can be passed as arguments to the function and it will return the sum of all the numbers
#this is because we are using arbitary positional arguments and we can pass any number of arguments to the function
print(add_numbers(10,3)) #13
#--------------------------------------------------------------------------------------------------------------------------

def add_numbers(numbers):
    sum=0
    for num in numbers:
        sum+=num
    return sum

add_numbers([10,3])
#this will not give an error because we are not passing two arguments to the function as the function is expects only one argument which is a list of numbers
print(add_numbers([10,3])) #13