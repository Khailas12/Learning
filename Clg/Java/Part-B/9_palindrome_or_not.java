// Prog to check whether the given num is Palindrome or not.

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Palindrome {
    public static void main(String args[]) throws IOException {
        int num, rev = 0, temp, digit;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the nmber");

        num = Integer.parseInt(br.readLine());
        temp = num;

        while (num > 0) {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        if (temp == rev) {
            System.out.println("The No. is Palindrome");
        } else {
            System.out.println("The No. is not a Palindrome");
        }
    }
}