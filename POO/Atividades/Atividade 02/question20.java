import java.util.Scanner;

public class question20 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite uma frase com números: ");
        String frase = scanner.nextLine();

        scanner.close();

        int contador = 0;
        for(int i = 0; i < frase.length(); i++){
            char caracter = frase.charAt(i);

            if(Character.isDigit(caracter)){
                contador++;
            }
        }

        System.out.println("Quantidade de números encontrados: " + contador);
    }
}
