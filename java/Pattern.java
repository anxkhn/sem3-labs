
import java.util.Scanner;

public class Pattern {
    public static void main(String[] args) {

        int i, j, n;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows");

        n = sc.nextInt();

        sc.close();

        for (i = 1; i <= n; i++)

        {

            for (j = 1; j <= n - i; j++) {

                System.out.print(" ");

            }
            for (j = 1; j <= i; j++)

            {

                System.out.print("*");

            }
            System.out.println();

        }

    }

}
