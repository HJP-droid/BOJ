import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int num;
    num = sc.nextInt();
    for(int count=1 ; count<= num; count++) {
        for(int i=1 ; i<= count; i++) {
            System.out.print('*');
         }
         System.out.print("\n");
        }
    }
}