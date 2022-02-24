import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class Reverse {
    public static void main(String args[]) throws IOException {
        int rev=0, num, digit;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the Number:   ");
        num = Integer.parseInt(br.readLine());

        while (num > 0) {
            digit = num % 10;
            num = num / 10;
            rev = rev * 10 + digit;
        }
        System.out.println("Reverse of a number is: " + rev);
    }
}