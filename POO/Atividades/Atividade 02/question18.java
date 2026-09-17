import java.util.Scanner;

public class question18 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite sua String: ");
        String palavra = scanner.nextLine();

        scanner.close();

        StringBuilder sb = new StringBuilder(palavra);
        int contador = 0;
        for(int i = 0; i < sb.length(); i++){
            if(sb.charAt(i) == 'a' || sb.charAt(i) == 'ã' || sb.charAt(i) == 'A' || sb.charAt(i) == 'Ã'){
                sb.setCharAt(i, 'b');
                contador += 1;
            }
        }

        System.out.println("Número de Caractéres Modificados: " + contador);
        System.out.println("Palavra Modificada: " + sb.toString());
    }
}