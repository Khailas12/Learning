# child and grandchild relatioship

class Base(object):
    def __init__(self, name):
        self.name = name
        
    def get_name(self):
        return self.name
    
    
class Child(Base):   # subclass
    def __init__(self, name, age):
        self.age = age
        
        Base.__init__(self, name)
    
    def get_age(self):
        return self.age
        

class GrandChild(Child):     # subclass
    def __init__(self, name, age, address):
        self.address = address

        Child.__init__(self, name, age)
        
    def get_address(self):
        return self.address
    
final = GrandChild('Bruce', 20, 'Gotham')
print(final.get_name(), final.get_age(), final.get_address())