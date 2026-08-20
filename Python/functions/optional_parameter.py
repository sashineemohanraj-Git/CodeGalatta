'''this is optional parameter example
as n=40 is default value, if we do not pass any value to n then it will take default value'''

def find_factorial(n=40):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return fact, 10,50

print(find_factorial(5))
print(find_factorial())

