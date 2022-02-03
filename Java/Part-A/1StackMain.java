import java.util.Stack;

class Main {
    public static void main(String[] args) {
        Stack<String> courses = new Stack<String>();
        courses.push("BBA");
        courses.push("BCA");
        courses.push("BA");

        System.out.println("Stack in: " + courses);
        courses.pop();
        System.out.println("Stack popped: " + courses);

    }
}