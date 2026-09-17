import java.util.Scanner;

public class question19 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite sua String: ");
        String palavra = scanner.nextLine();

        scanner.close();

        StringBuilder sb = new StringBuilder(palavra);
        int contador = 0;
        for(int i = 0; i < sb.length(); i++){
            if(sb.charAt(i) == 'a'){
                sb.delete(i, i + 1);
                contador++;
            }
        }

        System.out.println("Quantidade de caractéres removidos: " + contador);
        System.out.println("String modificada: " + sb.toString());
    }
}
