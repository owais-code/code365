# write a program to add 2 or more strings and print all together (first middle and last name) 
# store and print initials

def length(str):
    count = 0
    for i in str:
        count+= 1
    return count

def sorts(name):
    for i in range(3):
        for j in range(i + 1, 3):

         if name[i] > name[j]:
                name[i], name[j] = name[j], name[i]

first = 'star'
middle = 'stan'
last = 'stab'
name = first + ' ' + middle + ' ' +last
print(name)
initials = first[0] + '.'+ middle[0] + '.'+ last[0]
print(initials)

s_first= length(first)
s_middle= length(middle)
s_last= length(last)

name = [first, middle, last]

if(s_first>s_middle and s_first>s_last):
    print(first)
elif(s_middle>s_first and s_middle>s_last):
    print(middle)
elif(s_last>s_first and s_last>s_middle):
    print(last)    
elif(s_first == s_middle or s_first == s_last or s_middle == s_last):
    sorts(name)
    print(name[0])
