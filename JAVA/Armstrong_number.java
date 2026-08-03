import java.util.Scanner;
public class Armstrong {
    public static int numberOfDigits(int n) {
        int count = 0;
        while (n > 0) {
            count++;
            n /= 10;
        }
        return count;
    }

    public static boolean isArmstrong(int n) {
        int original = n;
        int sum =0;
        while(n > 0) {
            int digit = n % 10;
            sum += Math.pow(digit, numberOfDigits(original));
            n /= 10;
        }
        return original == sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        if (isArmstrong(n)) {
            System.out.println(n + " is an Armstrong number.");
        } else {
            System.out.println(n + " is not an Armstrong number.");
        }
        sc.close();
    }
}
