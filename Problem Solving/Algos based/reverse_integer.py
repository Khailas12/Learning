# reverse the digit

def reverse(x):
    string = str(x)
    
    if string[0] == '-':
        return int(f'-{string[:0:-1]}')
    
    else:
        return int(f'{string[::-1]}')
    
print(reverse(-473))
print(reverse(431))