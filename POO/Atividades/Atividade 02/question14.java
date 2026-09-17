import java.util.Scanner;

public class question14 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o número 'A': ");
        double a = scanner.nextDouble();
        System.out.print("Digite o número 'B': ");
        double b = scanner.nextDouble();
        System.out.print("Digite o número 'C': ");
        double c = scanner.nextDouble();

        scanner.close();

        double aux;
        if(a < b){
            aux = a;
            a = b;
            b = aux;
        }
        if(a < c){
            aux = a;
            a = c;
            c = aux;
        }
        if(b < c){
            aux = b;
            b = c;
            c = aux;
        }

        System.out.println("Resultado pós ordenação:");
        System.out.print("A = " + a + " | B = " + b + " | C = " + c);
    }
}
