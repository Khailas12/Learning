import java.util.Stack;


class StackMain {
    public static void main(String[] args) {
        Stack<String> courses = new Stack<String>();
        // add
        courses.push("BBA");
        courses.push("BCA");
        courses.push("BA");

        System.out.println("Stack in: " + courses);
        courses.pop(); // remove
        System.out.println("Stack popped: " + courses);

    }
}