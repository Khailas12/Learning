# The child class only inherits from parent class

class Parent:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    def view(self):
        print(self.name,"\n", self.age)
        

class Child(Parent):
    def __init__(self, name, age):
        Parent.__init__(self, name, age)
        
    def view(self):
        print('Name' , self.name, '\nAge', self.age)
    
info = Child('bruce', 20)
info.view()