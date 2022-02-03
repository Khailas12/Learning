import java.util.*;
import java.io.*;

class Rfile {
    public static void main(String args[]) throws IOException {

        int j = 1;
        char ch;

        Scanner Scr = new Scanner(System.in);
        System.out.println("Enter the file: ");
        String Str = Scr.next();

        FileInputStream f = new FileInputStream(Str);
        System.out.println("\nContents of the files are");

        int n = f.available();
        System.out.println(j + ": ");

        for (int i = 1; i < n; i++) {
            ch = (char) f.read();
            System.out.println(ch);
            if (ch == '\n') {
                System.out.println(++j + ": ");
            }
        }
    }
}