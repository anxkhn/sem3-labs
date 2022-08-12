import java.util.*;
import java.lang.math;

public class Quadratic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value for a: ");
        int a = sc.nextInt();
        System.out.print("Enter value for b: ");
        int b = sc.nextInt();
        System.out.print("Enter value for c: ");
        int c = sc.nextInt();
        double x, y;
        x = -b + Math.sqrt((b * b - 4 * a * c)) / (2 * a);
        y = -b - Math.sqrt((b * b - 4 * a * c)) / (2 * a);
        System.out.print("The algebraic roots of the equation are " + x + " and " + y + " ");
    }
}
