/**
 * HitTheLottery
 */
import java.util.Scanner;
public class HitTheLottery {

    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        long n = sc.nextLong();
        long  ans = 0;
        ans+=n/100; n%=100;
        ans+=n/20;  n%=20;
        ans+=n/10;  n%=10;
        ans+=n/5;   n%=5;
        ans+=n;
        System.out.println(ans);
        
    }
}