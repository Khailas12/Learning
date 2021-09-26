# Marshalins is the process of transforming the memory representation of an object into a data format suitable for storage or transmission. It is typically used when data must be moved between different parts of a computer program or from one program to another.

# The following types are supported: booleans, integers, floating point numbers, complex numbers, strings, bytes, bytearrays, tuples, lists, sets, frozensets, dictionaries, and code objects, where it should be understood that tuples, lists, sets, frozensets and dictionaries are only supported as long as the values contained therein are themselves supported. The singletons None, Ellipsis and StopIteration can also be marshalled and unmarshalled.


import marshal


data = {
    12: 'twelve', 
    'feep': list('cool'),
    1.23: 4+5j,
    (1, 2, 3): u'wer'
}

bytes = marshal.dumps(data)
redada = marshal.loads(bytes)


print(bytes)
print(redada)