first = 'Batman is one of the greatest superheros of all time'
second = 'Gotham is a fictional city'


def avg_word(sentence):
    for x in "!?',;.":
        sentence = sentence.replace(x, '')
        
    words = sentence.split()
    return round(sum(len(word) for word in words)/len(words), 2)

print(avg_word(first))
print(avg_word(second))