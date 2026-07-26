import java.util.Scanner;
public class Fibonacci_Series {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of terms for Fibonacci series: ");
        int n = scanner.nextInt();
        long first = 0, second = 1;
        System.out.print("Fibonacci Series: ");
        for (int i = 0; i < n; i++) {
            System.out.print(first + " ");
            long next = first + second;
            first = second;
            second = next;
        }
        scanner.close();
    }
}
