import java.util.Scanner;

public class question13 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe a Primeira Data:");
        System.out.println("Dia: ");
        int dia1 = scanner.nextInt();
        System.out.println("Mês: ");
        int mes1 = scanner.nextInt();
        System.out.println("Ano:");
        int ano1 = scanner.nextInt();

        System.out.println("Informe a Segunda Data:");
        System.out.println("Dia: ");
        int dia2 = scanner.nextInt();
        System.out.println("Mês: ");
        int mes2 = scanner.nextInt();
        System.out.println("Ano:");
        int ano2 = scanner.nextInt();

        int data1 = ano1 * 1000 + mes1 * 100 + dia1;
        int data2 = ano2 * 1000 + mes2 * 100 + dia2;

        if(data1 > data2){
            System.out.printf("O dia %02d/%02d/%02d é o maior", dia1, mes1, ano1);
        } else if (data2 > data1) {
            System.out.printf("O dia %02d/%02d/%02d é o maior", dia2, mes2, ano2);
        } else {
            System.out.print("As datas tem o mesmo tamanho");
        }

        scanner.close();
    }
}