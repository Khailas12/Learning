class Person(object):
    def __init__(self, name, id):   # __init__ = constructor
        self.name = name
        self.id = id
        
    def display(self):
        print(self.name)
        print(self.id)
        

# child class
class Employee(Person):
    def __init__(self, name, id, salary, post):
        self.salary = salary
        self.post = post
        
        Person.__init__(self, name, id)     # invoking the __init__ of parent class
        
details = Employee('John', 233234, 322323, 'Developer') # creation of obj var or instance   

details.display()   # calling a func of the Parent class using it's instance
        


# Subclassing (Calling constructor of parent class) 
# A child class needs to identify which class is its parent class. This can be done by mentioning the parent class name in the definition of the child class. 
# Eg: class subclass_name (superclass_name): 