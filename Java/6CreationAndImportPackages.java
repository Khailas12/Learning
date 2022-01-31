package MyPackage;

public class MyClass {
    int a;
    public void set_value(int n) {
        a = n;
    }

    public void display_value() {
        System.out.println("The Value of a is: " + a);
    }
}

import MyPackage.MyClass;

public class PackageDemo {
    public static void main(String args[]) {
        MyClass obj = new MyClass();

        obj.set_value(4);
        obj.display_value();
    }
}