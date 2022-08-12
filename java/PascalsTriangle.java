import java.util.*;
public class PascalsTriangle {
    public static void main(String[] args) {
        int n, i, j;
        System.out.println("Enter a number of rows: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - i; j++) {
                System.out.print("  ");
            }
            for (j = 0; j <= i; j++) {
                System.out.print(fact(i) / (fact(i - j) * fact(j)) + "   ");
            }
            System.out.print("\n");
        }
    }
    private static int fact(int n) {
        if (n == 0) {
            return 1;
        }
        return n * fact(n - 1);
    }
}
