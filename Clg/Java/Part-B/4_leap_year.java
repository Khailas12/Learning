import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class LeapYear {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Year");
        int year = Integer.parseInt(br.readLine());

        if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)) {
            System.out.println("Year" + year + " is a leap year");
        }
        else {
            System.out.println("year" + year + "us not a leap year");
        }
    }
}