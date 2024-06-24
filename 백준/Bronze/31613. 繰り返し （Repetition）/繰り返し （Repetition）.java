import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x = sc.nextInt();
		int n = sc.nextInt();
		int count = 0;
		
		while(x < n) {
			if(x % 3 == 0) {
				x++;
			}else if(x % 3 == 1) {
				x = x * 2;
			}else if(x % 3 == 2) {
				x = x * 3;
			}
			count++;
		}
		System.out.println(count);
		sc.close();
	}
}