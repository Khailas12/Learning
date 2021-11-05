# allows class to host as a parent clsss for more than one child clss or subclass.


class Parent:
    def func1(self):
        print('Parent')
        

class Child1(Parent):   # subclss or childclss 1
    def func2(self):
        print('Child1')
    
class Child2(Parent):
    def func3(self):
        print('Child2')
        
class Child3(Parent):
    def func4(self):
        print('Child 3')
        
child_obj1 = Child3()
child_obj2 = Child2()
child_obj3 = Child1()

child_obj1.func1()
child_obj1.func4()
child_obj2.func1()
child_obj2.func3()
child_obj3.func1()
child_obj3.func2()