import java.util.Scanner;

/**
 * A_Bear_and_Big_Brother
 */
public class A_Bear_and_Big_Brother {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        
        int c = 0 ;
        while (x<=y) {
            x = x*3;
            y = y*2;
            c = c+1;
        }
        System.out.print(c);
        // submisation problem
        
    }
}