
text= "follow"

print(text[0][0])

'''to slicing the string
syntax: text[start:end:step]
start: starting index of the string(mostly 0 if positive and -1 if negative)
end: ending index of the string(mostly length of the string if positive and -length of the string if negative)
step: step size to jump the index(mostly 1 if positive and -1 if negative)'''

print(text[:4]) #here we get foll 
print(text[1:5:2]) 
'''here we get ol (aslicing from index 1 to 5 with step size of 2, so f doesnt come and it start from
o and goes to 5 but 5 is not included so it stops at 4 and step size is 2 so it jumps to l)'''

print(text[:])
'''here it if positive
start=0;
end=length of the string;
step=1;
so it will print the whole string'''

print(text[2:2:]) #empty string

print(text[2:1:1]) #we get empty string
