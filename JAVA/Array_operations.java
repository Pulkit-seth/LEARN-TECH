import java.util.Scanner;
public class Array_operations {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of the array: ");
    int size = sc.nextInt();
    int arr[] = new int[size];
    System.out.println("Enter the elements of the array: ");
    for(int i = 0; i < size; i++){
      arr[i] = sc.nextInt();
    }
   int maximum = arr[0];
   int minimum = arr[0];
   double average = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] > maximum){
          maximum = arr[i];
        }
        if(arr[i] < minimum){
          minimum = arr[i];
        }
        average += arr[i];
     }
     average /= size;

     System.out.println("Maximum element in the array is: " + maximum);
     System.out.println("Minimum element in the array is: " + minimum);
     System.out.println("Average of the elements in the array is: " + average);
     sc.close();

  }  
}
