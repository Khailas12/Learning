# more than one type of inheritance is implemented in the same code
# This satisfies the requirement of implementing a code that needs multiple inheritances in implementation


class A:
    def func1(self):
        print('class A')

class B(A):
    def func2(self):
        print('Class B')

class C(A):
    def func3(self):
        print('Class C')
    
class D(A):
    def func4(self):
        print('Class D')
            
ref = D()
ref.func4()
ref.func2()
ref.func1()
