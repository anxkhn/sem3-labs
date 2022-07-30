import java.util.*;

public class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        int i;
        int fact = 1;
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        System.out.print("Factorial is " +fact);
        sc.close();
    }
}