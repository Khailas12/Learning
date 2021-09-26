import pickle


bruce = {
    'key': 'bruce', 'name': 'Bruce Wayne', 'age': 21
}

alfred = {
    'key': 'alfred', 'name': 'Alfred Pennyworth', 'age': 50
}


db = {
    'bruce': bruce,
    'alfred': alfred
}

pickling = pickle.dumps(db)
my_entry = pickle.loads(pickling)

print(my_entry)


# Pickle in Python is primarily used in serializing and deserializing a Python object structure. In other words, it's the process of converting a Python object into a byte stream to store it in a file/database, maintain program state across sessions, or transport data over the network.