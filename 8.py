#Day 8: Dictionaries and Maps

n = (int)(input())
phonebook = dict()
for i in range(n):
    line = (str)(input())
    line = line.split(" ")
    name = line[0]
    num = line[1]
    phonebook[name] = num

while(1):
    try:
        name = (str)(input())
        if(name in phonebook):
            print(name+"="+phonebook[name])
        else:
            print("Not found")
    except:
        break