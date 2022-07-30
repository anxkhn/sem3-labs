import java.util.*;

public class FloydsTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
		int i;
		int j;
		int k=1;
		for (i=0;i<=n;i++)
		{
			for (j=0;j<=i;j++)
			{
				System.out.print(k);
				System.out.print("\t");
				k++;
			}
			System.out.println();
		}
		sc.close();
    }
}