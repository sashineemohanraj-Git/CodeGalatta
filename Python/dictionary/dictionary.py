#dictionary syntax:
# variable={ key: value, key: value, ... }
#key can only be a int;float;string and tuple, value can be any data type

person = { "name": "Alice", "age": 30,  }

person["city"] = "New York"  # can add new key value pair

print(len(person))  # length of dictionary

print(person.keys())  # returns all the keys of dictionary
print(person.values())  # returns all the values of dictionary
print(person.items())  # returns all the key value pairs of dictionary
print(person.clear()) #we get none as output as it clears the dictionary