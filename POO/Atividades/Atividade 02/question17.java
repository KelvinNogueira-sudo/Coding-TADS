import java.util.Scanner;

public class question17 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite sua String: ");
        String palavra = scanner.nextLine();

        scanner.close();

        String palin = "";
        for(int i = palavra.length() - 1; i >= 0; i--){
            palin += palavra.charAt(i);
        }

        System.out.println(palin);
    }
}
