import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class Fibnacci {
    public static void main(String args[]) throws IOException {
        int fib1=0, fib2=1, temp=0, num;
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Limit: ");

        num = Integer.parseInt(br.readLine());

        System.out.println(fib1);
        System.out.println("\t");
        System.out.println(fib2);

        for (int i=2; i<num; i++) {
            temp = fib1 + fib2;
            System.out.println("\t");
            System.out.println(temp);

            fib1 = fib2;
            fib2 = temp;
        }
    }
}