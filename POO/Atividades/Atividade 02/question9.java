import java.util.Scanner;

public class question9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite sua 1° nota:");
        double nota1 = scanner.nextDouble();
        System.out.println("Digite sua 2° nota:");
        double nota2 = scanner.nextDouble();
        System.out.println("Digite sua 3° nota:");
        double nota3 = scanner.nextDouble();

        double media = (nota1 + nota2 + nota3) / 3.0;

        char conceito;
        if(media >= 9.0){
            conceito = 'A';
        } else if (media >= 7.5) {
            conceito = 'B';
        } else if (media >= 6.0) {
            conceito = 'C';
        } else {
            conceito = 'D';
        }

        System.out.printf("\nMédia: %.2f%n", media);
        System.out.printf("Conceito: %c%n", conceito);

        scanner.close();
    }
}
