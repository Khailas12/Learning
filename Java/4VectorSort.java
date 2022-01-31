import java.util.*;
import java.util.Vector;

class VectorSort {
    public static void main(String[] args) {
        Vector<Integer> in = new Vector<Integer>();

        in.add(30);
        in.add(50);
        in.add(80);
        in.add(70);
        in.add(10);
        in.add(40);
        in.add(20);
        in.add(60);

        System.out.println("Original Vector: " + in);
        Collections.sort(in);
        System.out.println("Sorted: " + in);
    }
}