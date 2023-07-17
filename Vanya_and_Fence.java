import java.util.Scanner;

/**
 * 677A_Vanya_and_Fence
 */
public class Vanya_and_Fence {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int[] arr = new int[x]; 
        for(int i=0; i<x; i++){
            arr[i] = sc.nextInt();
        }
        int ans=0;
        for(int i=0; i<x; i++){
            if(arr[i]%y==0){
                ans+= arr[i]/y;
            }else{
                ans+= arr[i]/y+1;
            }
        }
        System.out.println(ans);

    }
}