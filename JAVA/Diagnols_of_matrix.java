import java.util.Scanner;
public class Diagnols_of_matrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int rows = scanner.nextInt();
        System.out.print("Enter number of columns: ");
        int cols = scanner.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Primary diagonal elements:");
        for (int i = 0; i < Math.min(rows, cols); i++) {
            System.out.print(matrix[i][i] + " ");
        }
        System.out.println();

        System.out.println("Secondary diagonal elements:");
        for (int i = 0; i < Math.min(rows, cols); i++) {
            System.out.print(matrix[i][cols - 1 - i] + " ");
        }
        System.out.println();
        
        scanner.close();
    }
}
