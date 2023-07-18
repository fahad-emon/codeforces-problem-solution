import java.util.Scanner;

/**
 * 318 A.Even_odds
 */
public class Even_odds {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextInt();
        long k = sc.nextInt();
        if (n % 2 == 0)// if n even number
        {
            if (k <= (n / 2)) {
                System.out.println((k * 2) - 1);
            } else {
                System.out.println((k - (n / 2)) * 2);
            }
        } else { // if n odd number
            if (k <= (n / 2) + 1) {
                System.out.println((k * 2) - 1);

            } else {
                System.out.println((k - ((n / 2) + 1)) * 2);
            }
        }

    }
}