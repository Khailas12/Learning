from collections import defaultdict


text = 'i am batman'
chars = defaultdict(int)

for char in text:
    chars[char] += 1
    
print(chars['i'])
print(chars['a'])
print(chars['m']) 
print(chars['b']) 
print(chars['t']) 
print(chars['n'])