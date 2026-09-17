import  java.util.Scanner;

public class question10 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite seu Número:");
        int num = scanner.nextInt();

        double out;
        if(num <= 0){
            out = num * num;
        } else {
            out = Math.sqrt(num);
        }

        System.out.printf("\n%.2f%n", out);
    }
}
