import java.util.Scanner; 
public class Sum_of_10_nums {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = 0;
        System.out.println("Enter 10 numbers:");
        for (int i = 0; i < 10; i++) {
            sum += scanner.nextInt();
        }
        System.out.println("Sum of 10 numbers: " + sum);
        scanner.close();
    }
}
