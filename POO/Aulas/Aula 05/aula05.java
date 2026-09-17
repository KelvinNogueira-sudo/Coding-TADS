import Cadastro.*;

void main() {
    Professor p1 = new Professor("123", "Marlon", 100000);
    Aluno p2 = new Aluno("456", "Junin", "2026");

    System.out.println(p1.getNome());
    System.out.println(p2.getNome());

    /*
    Pessoa p1 = new Pessoa();
    System.out.println(p1);
    Pessoa p2;
    Pessoa p3;

    p1.setNome("Junin");
    p2 = p1;
    p3 = p2;

    p3.setNome("jujuba");

    System.out.println(p1.getNome());
    System.out.println(p2.getNome());
    System.out.println(p3.getNome());

    String x = "X";
    String y;

    y = x;
    x = "Mudou";
    System.out.println(y);
    System.out.println(x);

    //System.out.println("Hello World");
    //for (int i = 1; i <= 5; i++) {
    //    System.out.println("i = " + i);
    }*/
}