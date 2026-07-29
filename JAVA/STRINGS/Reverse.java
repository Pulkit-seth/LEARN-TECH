import java.util.Scanner;


public class Reverse {
    public static String reverse(String s){
       String reversed = new String();
         for(int i = s.length() - 1; i >= 0; i--){
                reversed += s.charAt(i);
          }
          return reversed;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        String reversedStr = reverse(str);
        System.out.println("Reversed string: " + reversedStr);
        sc.close();
    }   
    
}
