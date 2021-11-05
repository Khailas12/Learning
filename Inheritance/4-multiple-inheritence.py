# the child class inherits from multiple parents

class Parent1(object):
    def __init__(self):
        self.str1 = 'Bruce'
        print('Parent1')
        
class Parent2(object):
    def __init__(self):
        self.str2 = 'Alfred'
        print('Parent2')
        
class Child(Parent1, Parent2):
    def __init__(self):
        # calling constructors
        Parent1.__init__(self)
        Parent2.__init__(self)
        print('Child')
    
    def print_strs(self):
        print(self.str1, self.str2)
        
obj = Child()
obj.print_strs()
            