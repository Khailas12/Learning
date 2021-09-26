
import pickle


def store_data():
    bruce = {
        'key': 'bruce', 'name': 'Bruce Wayne', 'age': 21, 'pay': 40000
    }
    alfred = {
        'key': 'alfred', 'name': 'Alfred Pennyworth', 'age': 50
    }
    
    
    db = {
        'bruce': bruce,
        'alfred': alfred
    }
    
    
    dbfile = open('example_pickle', 'ab')
    
    pickle.dump(db, dbfile)
    dbfile.close()
    

def load_data():
    dbfile = open('example_pickle', 'rb')
    db = pickle.load(dbfile)
    
    for keys in db:
        print(keys, '->', db[keys])
        
    dbfile.close()

if __name__ == '__main__':
    store_data()
    load_data()



# Python pickle module is used for serializing and de-serializing a Python object structure. Any object in Python can be pickled so that it can be saved on disk. What pickle does is that it “serializes” the object first before writing it to file. Pickling is a way to convert a python object (list, dict, etc.) into a character stream. The idea is that this character stream contains all the information necessary to reconstruct the object in another python script.
