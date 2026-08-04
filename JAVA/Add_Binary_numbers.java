import java.util.Scanner;
public class Add_Binary_nums {
  
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first binary number: ");
        String binary1 = sc.nextLine();
        System.out.print("Enter second binary number: ");
        String binary2 = sc.nextLine();
        int decimal1 = Integer.parseInt(binary1, 2);
        int decimal2 = Integer.parseInt(binary2, 2);
        int sum = decimal1 + decimal2;
        String result = Integer.toBinaryString(sum);
        System.out.println("Sum of binary numbers: " + result);
        sc.close();
    }
}
