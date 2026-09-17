import java.util.Scanner;

public class question11 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o Preço á Vista do Produto: R$");
        double valor = scanner.nextDouble();
        System.out.print("Digite quantas vezes o produto será Parcelado: ");
        int parc = scanner.nextInt();

        double acrescimo;
        if(parc >= 5){
            acrescimo = ((double) 20 /100) * valor;
        } else if (parc >= 3) {
            acrescimo = ((double) 10 /100) * valor;
        } else {
            acrescimo = 0;
        }

        double valorTotal = valor + acrescimo;
        System.out.printf("\nValor do Produto: R$%.2f%n", valor);
        System.out.printf("Valor do Acréscimo: R$%.2f%n", acrescimo);
        System.out.printf("Total a pagar: R$%.2f%n", valorTotal);

        scanner.close();
    }
}
