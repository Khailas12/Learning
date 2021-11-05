class Person(object):
    def __init__(self, name):   # constructor
        self.name = name
        
    def get_name(self):
        return self.name
    
    def is_employee(self):
        return False
    
# subclass
class Employee(Person):     # child calls constructor or parent class
    def is_employee(self):
        return True
    
employee = Person('Bruce Wayne')    # obj of employee
print(employee.get_name(), employee.is_employee())
