import java.util.Scanner;
public class Swap_variables {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first variable: ");
        int a = scanner.nextInt();
        System.out.print("Enter second variable: ");
        int b = scanner.nextInt();
        
        // Swapping variables
        int temp = a;
        a = b;
        b = temp;
        
        System.out.println("After swapping:");
        System.out.println("First variable: " + a);
        System.out.println("Second variable: " + b);
        
        scanner.close();
    }
}
