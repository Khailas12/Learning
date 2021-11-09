def find_correct():
    word_dict = {
        'THEIR': 'THEIR',
        'BUSINESS': 'BISINESS',
        'WINDOWS': 'WINDMILL',
        'WERE': 'WEAR',
        'SAMPLE': 'SAMPLE',
    }
    
    correct = 0
    almost_correct = 0
    wrong = 0
    
    for key, value in word_dict.items():
        count = 0
                    
        if key==value:
            correct+=1     

        elif len(key)==len(value):
            if count<=2:
                almost_correct+=1

        else:
            wrong+=1
            
    the_list = [correct, almost_correct, wrong]
    print(the_list)
    return list

find_correct()