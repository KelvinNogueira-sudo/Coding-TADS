import java.util.Scanner;

public class question15 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite 2 números inteiros: ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        System.out.println("Números entre " + num1 + " e " + num2);

        for(int i = num1 + 1; i < num2; i++){
            System.out.println(i + " ");
        }

        scanner.close();
    }
}
