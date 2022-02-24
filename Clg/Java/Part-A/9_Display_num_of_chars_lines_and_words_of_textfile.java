// Prog that displays the nums of characters, lines and words of a text file.

import java.util.*;
import java.io.*;


class Cfile {
    public static void main(String args[]) throws IOException {
        int nl = 1, nw = 0;
        char ch;

        Scanner Scr = new Scanner(System.in);
        System.out.println("Enter the file: ");
        String Str = Scr.nextLine();

        FileInputStream f = new FileInputStream(Str);
        int n = f.available();

        for (int i = 0; i < n; i++) {
            ch = (char) f.read();

            if (ch == '\n') {
                nl++;
            } 
            else if (ch == ' ') {
                nw++;
            }
        }
        System.out.println("\nNumber of Lines: " + nl);
        System.out.println("\nNumber of words: " + (nl + nw));
        System.out.println("\nNumber of Characters: " + n);
    }
}