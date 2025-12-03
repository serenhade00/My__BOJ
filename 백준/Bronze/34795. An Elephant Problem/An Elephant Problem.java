import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double m = sc.nextInt();
        double d = sc.nextInt();

        int res = (int) Math.ceil(d / m);
        System.out.println(res);
    }
}