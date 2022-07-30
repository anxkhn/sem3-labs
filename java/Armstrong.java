import java.util.*;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to be checked: ");
        int n = sc.nextInt();
		int rem, sum = 0 , temp = n;
		while (n>0) 
		{
			rem = n%10;
			sum = sum + (rem*rem*rem);
			n=n/10;
		}
		if (sum==temp)
		{
			System.out.println(temp+ " is an Armstrong number");
		}
		else
		{
			System.out.println(temp+ " is not an Armstrong number");
		}
		sc.close();
    }
}