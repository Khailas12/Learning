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