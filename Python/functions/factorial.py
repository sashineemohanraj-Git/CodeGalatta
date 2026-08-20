#functions

def find_factorial(n):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return fact, 10,50

print(find_factorial(5))
print(list(range(1, 1+1)))