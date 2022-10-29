import java.util.*;

class Main {
    public static void main(String[] args) {
        int x = 70;
        int y = 0;
        try {
            System.out.println(x / y);
        } catch (Exception e) {
            System.out.println(
                    "Divided by zero exception.");
        }
    }
}