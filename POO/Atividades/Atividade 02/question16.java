import java.util.Scanner;

public class question16 {
    public static void main(){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite um número: ");
        int n = scanner.nextInt();

        scanner.close();


        if(n < 0){
            System.out.println("Não existe fatorial de um número negativo");
        } else {
            long fat = 1;
            for (int i = 2; i <= n; i++) {
                fat *= i;
            }
            System.out.println("O fatorial de " + n + " é: " + fat);
        }
    }
}
